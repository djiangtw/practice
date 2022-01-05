/**
 *     Filename: leet_13_roman_to_integer.c
 *  Description: 13. Roman to Integer
 *      Version: 1.0
 *      Created: 14:03:27 03-17-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/roman-to-integer/
 */

#include "leet_header.h"
#include "leet_13_roman_to_integer.h"

extern void str_reverse(char* s);
static int romanc(char c)
{
    int r = 0;
    switch(c)
    {
        case 'I':
            r = 1;
            break;
        case 'V':
            r = 5;
            break;
        case 'X':
            r = 10;
            break;
        case 'L':
            r = 50;
            break;
        case 'C':
            r = 100;
            break;
        case 'D':
            r = 500;
            break;
        case 'M':
            r = 1000;
            break;
    }
    return r;
}

int romanToInt(char* s)
{
    int ret = 0;
    char lastc;

    str_reverse(s);
    lastc = 0;
    while(*s != 0)
    {
        if(romanc(*s) >= romanc(lastc))
        {
            ret += romanc(*s);
        }
        else
        {
            ret -= romanc(*s);
        }
        lastc = *s;
        s++;
    }
        
    return ret;
}

static void test1(void)
{
    char s[] = "XII";
    printf("%d\n", romanToInt(s));
}

static void test2(void)
{
    char s[] = "MCMXCVI";
    printf("%d\n", romanToInt(s));
}

int leet_13_roman_to_integer_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    return 0;
}

