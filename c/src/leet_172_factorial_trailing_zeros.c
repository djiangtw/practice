/**
 *     Filename: leet_172_factorial_trailing_zeros.c
 *  Description: 172. Factorial Trailing Zeroes
 *      Version: 1.0
 *      Created: 13:32:42 03-17-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/factorial-trailing-zeroes/
 */

#include "leet_header.h"
#include "leet_172_factorial_trailing_zeros.h"

int trailingZeroes(int n)
{
    int ret = 0;

    while(n / 5 != 0)
    {
        ret = ret + n / 5;
        n /= 5;
    }

    return ret;
}

int trailingZeroes_1(int n)
{
    int ret = 0;
    int k = 5;

    while(n/k != 0)
    {
        ret += n / k;
        k *= 5;
    }
        
    return ret;
}

static void test1(void)
{
    int a;
    a = trailingZeroes(10);
    printf("%d\n", a);
    a = trailingZeroes(100);
    printf("%d\n", a);
    a = trailingZeroes(1000);
    printf("%d\n", a);
}


int leet_172_factorial_trailing_zeros_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

