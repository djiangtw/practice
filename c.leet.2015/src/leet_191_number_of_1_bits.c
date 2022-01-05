/**
 *     Filename: leet_191_number_of_1_bits.c
 *  Description: 191. Number of 1 Bits
 *      Version: 1.0
 *      Created: 14:35:43 03-11-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/number-of-1-bits/
 */

#include "leet_header.h"
#include "leet_191_number_of_1_bits.h"
#include <stdint.h>

static bool is_power_of_two(uint32_t x)
{
    return (x != 0) && !(x & (x - 1));
}

int hammingWeight(uint32_t n)
{
    int ret = 0;

    while(n != 0)
    {
        if((n & 0x1) != 0)
        {
            ret++;
        }
        n = n >> 1;
        if(is_power_of_two(n))
        {
            ret++;
            return ret;
        }
    }
    return ret;
}

static void test1(void)
{
    int c;
    uint32_t x;
    x = 0x300000c;
    c = hammingWeight(x);
    printf("%d\n", c);
    x = 0x1000000;
    c = hammingWeight(x);
    printf("%d\n", c);
}

int leet_191_number_of_1_bits_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

