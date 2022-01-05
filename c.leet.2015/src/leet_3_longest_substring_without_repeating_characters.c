/**
 *     Filename: leet_3_longest_substring_without_repeating_characters.c
 *  Description: 3. Longest Substring Without Repeating Characters
 *      Version: 1.0
 *      Created: 10:02:20 03-01-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_3_longest_substring_without_repeating_characters.h"
#include <string.h>

bool is_char_found(char* s, char c)
{
    while(*s != 0)
    {
        if(*s == c)
        {
            return true;
        }
        s++;
    }
    return false;
}

#if 0
{
print "The numbers: "

for num in numbers:
    print num
}
#endif

int no_duplicate_length(char* s)
{
    int i;
    int j;
    int tmp;
    int len;
    int min_count;
    len = strlen(s);
    if(len <= 1)
    {
        return len;
    }
    min_count =0;
    for (i = 0; i < len; i++)
    {
        tmp = 0;
        for (j = i + 1; j < len; j++) {
            if(s[i] == s[j])
            {
                tmp = j - i + 1;
                break;
            }
        }
        if (tmp < min_count)
        {

        }
    }
    return 0;
}

int lengthOfLongestSubstring(char* s)
{
    int max_count;
    int i;
    /*int j;*/
    int tmp;
    int len;

    len = strlen(s);
    if(len <= 1)
    {
        return len;
    }

    for (i = 0; i < len; i++)
    {
        tmp = no_duplicate_length(s+i);
        if(tmp > max_count)
        {
            max_count = tmp;
        }
    }
    return 0;

}

/* need to consider the circular issue. maybse use a ring queue for 256 characters is better. */
int lengthOfLongestSubstring_debugging2(char* s)
{
    char cc[256] = {0};
    int max_count = 0;
    int tmp = 0;

    while(*s != 0)
    {
        if(is_char_found(cc, *s) == true)
        {
            if(tmp > max_count)
            {
                max_count = tmp;
            }
            tmp = 0;
            cc[tmp] = *s;
            tmp++;
            cc[tmp] = 0;
        }
        else
        {
            cc[tmp] = *s;
            tmp++;
            cc[tmp] = 0;
        }
        s++;
    }
    return max_count;
}

int lengthOfLongestSubstring_debugging(char* s)
{
    char cc[256] = {0};
    int max_count = 0;
    int tmp = 0;
    int i;

    while(*s != 0)
    {
        if(cc[(int)*s] == false)
        {
            cc[(int)*s] = true;
            tmp++;
        }
        else
        {
            if(tmp > max_count)
            {
                max_count = tmp;
            }
            tmp = 0;
            /*memset(cc, false, 256);*/
            for (i = 0; i < 256; i++) {
                cc[i] = false;
            }
        }
        s++;
    }
    return max_count;
}

static void test1(void)
{
    char cc[] = "";
    printf("%d\n", lengthOfLongestSubstring(cc));
}

static void test2(void)
{
    char cc[] = "abcadefg";
    printf("%d\n", lengthOfLongestSubstring(cc));
}

static void test3(void)
{
    char cc[] = "abcdabcdef";
    printf("%d\n", lengthOfLongestSubstring(cc));
}

int leet_3_longest_substring_without_repeating_characters_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    test3();
    return 0;
}

