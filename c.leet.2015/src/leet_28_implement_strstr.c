/**
 *     Filename: leet_28_implement_strstr.c
 *  Description: 28. Implement strStr()
 *      Version: 1.0
 *      Created: 21:26:46 03-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/implement-strstr/
 */

#include "leet_header.h"
#include "leet_28_implement_strstr.h"

/*  
 *  check {h, n} = {"", "a"}, {"a", ""}, {"", ""}. 
 */
int strStr(char* haystack, char* needle)
{
    char *p, *q;
    int r;

    r = 0;
    while(*haystack != 0 && *needle != 0)
    {
        while(*haystack != *needle)
        {
            haystack++;
            r++;
            if(*haystack == 0)
                return -1;
        }
        p = haystack;
        q = needle;
        while(*p == *q && *q != 0 && *p != 0)
        {
            p++;
            q++;
        }
        if(*q == 0)
        {
            return r;
        }
        else if(*p == 0)
        {
            return -1;
        }
        else
        {
            haystack++;
            r++;
        }
    }
    if(*needle == 0)
        return 0;
    else
        return -1;
}

#if 0
int strStr(char* haystack, char* needle)
{
    char *p, *q;
    int r;

    r = 0;
    while(*haystack)
    {
        p = haystack;
        q = needle;
        while(*p != *q)
        {
            p++;
            r++;
        }
        haystack = p;
        while(*p == *q && *q != 0 && *p != 0)
        {
            p++;
            q++;
        }
        if(*q == 0)
        {
            return r;
        }
        else if(*p == 0)
        {
            return -1;
        }
        else
        {
            haystack++;
            r++;
        }
    }
    return -1;
}
#endif

int leet_28_implement_strstr_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

