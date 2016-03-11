/**
 *     Filename: leet_299_bulls_and_cows.c
 *  Description: 299. Bulls and Cows
 *      Version: 1.0
 *      Created: 09:31:33 03-11-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/bulls-and-cows/
 */

#include "leet_header.h"
#include "leet_299_bulls_and_cows.h"
#include <string.h>

char* getHint(char* secret, char* guess)
{
    char candidates[256] = {0};
    int i;
    int s_len;
    int a = 0, b = 0;
    char* ret;

    ret = (char*)malloc(sizeof(char) * 4);
    s_len = strlen(secret);

    for (i = 0; i < s_len; i++) {
        if(secret[i] == guess[i])
        {
            a++;
        }
        else
        {
            candidates[(int)secret[i]]++;
        }
    }
    for (i = 0; i < s_len; i++) {
        if(secret[i] != guess[i] && candidates[(int)guess[i]] != 0)
        {
            b++;
            candidates[(int)guess[i]]--;
        }
    }

    sprintf(ret, "%dA%dB", a, b);
    return ret;
}

int leet_299_bulls_and_cows_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

