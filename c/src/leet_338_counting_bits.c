/**
 *     Filename: leet_338_counting_bits.c
 *  Description: 338. Counting Bits
 *      Version: 1.0
 *      Created: 02:16:34 03-19-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/counting-bits/
 */

#include "leet_header.h"
#include "leet_338_counting_bits.h"
#include <stdint.h>

static bool is_power_of_two(uint32_t x)
{
    return (x != 0) && !(x & (x - 1));
}

static int hammingWeight(uint32_t n)
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
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int num, int* returnSize)
{
    int i;
    int *r;

    r = (int*)malloc(sizeof(int) * (num + 1));
    /*returnSize = (int*)malloc(sizeof(int));*/
    *returnSize = num + 1;

    for (i = 0; i <= num; i++)
    {
        r[i] = hammingWeight(i);
    }
    printf("%d: ", *returnSize);
    for(i = 0; i <= num; i++)
    {
        printf("%d, ", r[i]);
    }
    return r;
}
int* countBits_1(int num, int* returnSize)
{
    int i;
    int *r;
    int pow2 = 1,before = 1;

    r = (int*)malloc(sizeof(int) * (num + 1));
    *returnSize = num + 1;

    r[0] = 0;
    r[1] = 1;
    for(i = 1; i <= num; i++)
    {
        if (i == pow2)
        {
            before = r[i] = 1;
            pow2 <<= 1;
        }
        else
        {
            r[i] = r[before] + 1;
            before += 1;
        }
    }
    return r;
}
int* countBits_2(int num, int* returnSize)
{
    int i;
    int *r;

    r = (int*)malloc(sizeof(int) * (num + 1));
    *returnSize = num + 1;

    r[0] = 0;
    for(i = 1; i <= num; i++)
    {
        r[i] = r[i >> 1] + (i & 1);
    }
    return r;
}
#if 0
int* countBits(int num, int* returnSize)
{
    int i;
    int *ret;
    ret = (int*)malloc(sizeof(int) * (num + 1));
    returnSize = (int*)malloc(sizeof(int));
    *returnSize = num + 1;

    for (i = 0; i <= num; i++)
    {
        returnSize[i] = hammingWeight(i);
    }
    return ret;
}
#endif
int leet_338_counting_bits_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

