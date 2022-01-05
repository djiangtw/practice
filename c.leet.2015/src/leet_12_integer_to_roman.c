/**
 *     Filename: leet_12_integer_to_roman.c
 *  Description: 12. Integer to Roman
 *      Version: 1.0
 *      Created: 11:39:50 03-22-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/integer-to-roman/
 */

#include "leet_header.h"
#include "leet_12_integer_to_roman.h"
#include <string.h>

/*
 *  I, 1
 *  V, 5
 *  X, 10
 *  L, 50
 *  C, 100
 *  D, 500
 *  M, 1000
 */

char* intToRoman(int num)
{
    /*char cc[] = "MDCLXVI";*/
    char ss[100] = {0};
    char* s;
    char* r;
    int n;
    /*int t;*/
    /*int i, j;*/

    s = ss;
    /*t = 1;*/
    /* 1000 */
    n = (num / 1000) % 10;
    while(n--)
    {
        *s = 'M';
        s++;
    }
    /* 100 */
    n = (num / 100) % 10;
    if(n <= 3)
    {
        while(n--)
        {
            *s = 'C';
            s++;
        }
    }
    else if(n <= 5)
    {
        n = 5 - n;
        while(n--)
        {
            *s++ = 'C';
        }
        *s++ = 'D';
    }
    else if(n <= 8)
    {
        n = n - 5;
        *s++ = 'D';
        while(n--)
        {
            *s++ = 'C';
        }
    }
    else
    {
        *s++ = 'C';
        *s++ = 'M';
    }
    /* 10 */
    n = (num / 10) % 10;
    if(n <= 3)
    {
        while(n--)
        {
            *s = 'X';
            s++;
        }
    }
    else if(n <= 5)
    {
        n = 5 - n;
        while(n--)
        {
            *s++ = 'X';
        }
        *s++ = 'L';
    }
    else if(n <= 8)
    {
        n = n - 5;
        *s++ = 'L';
        while(n--)
        {
            *s++ = 'X';
        }
    }
    else
    {
        *s++ = 'X';
        *s++ = 'C';
    }

    /* 1 */
    n = (num) % 10;
    if(n <= 3)
    {
        while(n--)
        {
//            printf("%x\n", s);
            *s++ = 'I';
        }
    }
    else if(n <= 5)
    {
        n = 5 - n;
        while(n--)
        {
            *s++ = 'I';
        }
        *s++ = 'V';
    }
    else if(n <= 8)
    {
        n = n - 5;
        *s++ = 'V';
        while(n--)
        {
            *s++ = 'I';
        }
    }
    else
    {
        *s++ = 'I';
        *s++ = 'X';
    }
    *s++ = 0;
//    printf("r = %x, ss = %x\n", r, ss);

    r = (char*)malloc(sizeof(char) * strlen(ss) + 1);
    memcpy(r, ss, sizeof(char) * strlen(ss) + 1);
    return r;
}

/*TODO: suspended.*/
#if 0
char* intToRoman(int num)
{
    char romanint[] = "IVXLCDM";
    char s[20] = {0};
    int i;

    while(n != 0)
    {

    }

            

}
#endif
int leet_12_integer_to_roman_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

