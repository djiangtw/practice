/**
 *     Filename: leet_58_length_of_last_word.c
 *  Description: 58. Length of Last Word
 *      Version: 1.0
 *      Created: 10:33:10 03-18-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/length-of-last-word/
 */

#include "leet_header.h"
#include "leet_58_length_of_last_word.h"

extern void str_reverse(char* s);
int lengthOfLastWord(char* s)
{
    int r = 0;
    if(*s == 0)
    {
        return r;
    }
    str_reverse(s);
    while(*s == ' ')
    {
        s++;
    }
    while(*s != ' ' && *s != 0)
    {
        r++;
        s++;
    }
    return r;
}
int leet_58_length_of_last_word_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

