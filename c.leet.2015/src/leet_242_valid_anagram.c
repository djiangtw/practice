/**
 *     Filename: leet_242_valid_anagram.c
 *  Description: 242. Valid Anagram
 *      Version: 1.0
 *      Created: 10:05:49 02-25-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_242_valid_anagram.h"
#include <string.h>

bool isAnagram(char* s, char* t)
{
    int sz_s;
    int sz_t;
    int statistic_s[26] = {0};
    int statistic_t[26] = {0};
    int i;

    sz_s = strlen(s);
    sz_t = strlen(t);
    if(sz_s != sz_t)
    {
        return false;
    }
    
    for (i = 0; i < sz_s; i++, s++, t++)
    {
        statistic_s[*s - 'a']++;
        statistic_t[*t - 'a']++;
    }
    for (i = 0; i < 26; i++) {
        if(statistic_s[i] != statistic_t[i])
        {
            return false;
        }
    }
    return true;
}

int leet_242_valid_anagram_test(void)
{
    return 0;
}

