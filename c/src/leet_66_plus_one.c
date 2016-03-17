/**
 *     Filename: leet_66_plus_one.c
 *  Description: 66. Plus One
 *      Version: 1.0
 *      Created: 16:06:44 03-17-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/plus-one/
 */

#include "leet_header.h"
#include "leet_66_plus_one.h"
#include <string.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int carry = 0;
    int sz;
    int* r;

    sz = digitsSize;
    r = (int*)malloc(sizeof(int) * (1 + sz));
    digits[digitsSize - 1]++;
    while(digitsSize--)
    {
        digits[digitsSize] += carry;
        carry = digits[digitsSize] / 10;
        digits[digitsSize] = digits[digitsSize] % 10;
    }

    if(carry == 0)
    {
        memcpy(r, digits, sizeof(int) * sz);
        *returnSize = sz;
    }
    else
    {
        memcpy((r + 1), digits, sizeof(int) * sz);
        r[0] = carry;
        *returnSize = sz + 1;
    }
    return r;
}

int leet_66_plus_one_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

