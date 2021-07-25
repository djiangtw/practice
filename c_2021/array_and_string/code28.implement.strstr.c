/*
 * 1. to use naive method to solve this problem.
 * 2. try to use KMP algorithm. a classic one.
 *
 *  Implement strStr().
 *
 * Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
 *
 * Clarification:
 *
 * What should we return when needle is an empty string? This is a great question to ask during an interview.
 *
 * For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
 *
 *
 *
 * Example 1:
 *
 * Input: haystack = "hello", needle = "ll"
 * Output: 2
 * Example 2:
 *
 * Input: haystack = "aaaaa", needle = "bba"
 * Output: -1
 * Example 3:
 *
 * Input: haystack = "", needle = ""
 * Output: 0
 *
 *
 * Constraints:
 *
 * 0 <= haystack.length, needle.length <= 5 * 104
 * haystack and needle consist of only lower-case English characters.*
 *  *
 * # Reference
 *  Examples of lps[] construction:
 * For the pattern “AAAA”,
 * lps[] is [0, 1, 2, 3]
 *
 * For the pattern “ABCDE”,
 * lps[] is [0, 0, 0, 0, 0]
 *
 * For the pattern “AABAACAABAA”,
 * lps[] is [0, 1, 0, 1, 2, 0, 1, 2, 3, 4, 5]
 *
 * For the pattern “AAACAAAAAC”,
 * lps[] is [0, 1, 2, 0, 1, 2, 3, 3, 3, 4]
 *
 * For the pattern “AAABAAA”,
 * lps[] is [0, 1, 2, 0, 1, 2, 3]
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define KMP 0
#define NAIVE 1
#if KMP

/*
 * (expr)   : true / false
 * !(expr)  : 0    / 1
 * !!(expr) : 1    / 0
 *
 * this is an KMP algorithm implementation.
 * TODO: review it
 */
#define likely(expr)    (__builtin_expect(!!(expr), 1))
#define unlikely(expr)  (__builtin_expect(!!(expr), 0))

int strStr(char* haystack, char* needle) {
    int hlen = strlen(haystack);
    int nlen = strlen(needle);

    if(unlikely(nlen == 0)) return 0;

    int pref[nlen+1];
    pref[1] = 0;
    int q = 0, k = 0, m = 0;

    // Calculate prefix table for pattern: needle
    for (q = 1; q < nlen; ++q) {
        while (k > 0 && needle[k] != needle[q])
            k = pref[k];
        if (unlikely(needle[k] == needle[q]))
            ++k;
        pref[q+1] = k;
    }
    m = q;
    k = 0;

    // Traverse input to find a pattern, first occurence win
    for (q = 0; q < hlen; ++q) {
        while (k > 0 && haystack[q] != needle[k])
            k = pref[k];
        if (unlikely(needle[k] == haystack[q]))
            ++k;
        if (unlikely(m == k)) return (q-m+1);
    }

    return -1;
}
#elif NAIVE
int strStr(char * haystack, char * needle){
    int h = strlen(haystack);
    int n = strlen(needle);
    if(n == 0)
        return 0;
    if (h < n)
        return -1;

    int i, j;
    for(i = 0; i <= (h - n); i++)
    {
        for(j = 0; j < n; j++)
        {
            if(haystack[i + j] != needle[j])
                break;
            if(j == (n - 1))
                return i;
        }
    }

    return -1;
}

#else

#endif

#if 0
/* python3 solution. try to read and understand it */
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        h, n = len(haystack), len(needle)
        if n == 0: return 0
        if h < n: return -1
        i, next_ = 0, [0] * n
        for j in range(1, n):
            while i > 0 and needle[i] != needle[j]:
                i = next_[i - 1]
            i += needle[i] == needle[j]
            next_[j] = i
        i = 0
        for j in range(h):
            while i > 0 and needle[i] != haystack[j]:
                i = next_[i - 1]
            i += needle[i] == haystack[j]
            if i == n: return j - i + 1
        return -1
#endif

