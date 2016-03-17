/**
 *     Filename: leet_136_single_number.c
 *  Description: 136. Single Number
 *      Version: 1.0
 *      Created: 10:28:46 03-16-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/single-number/
 */

#include "leet_header.h"
#include "leet_136_single_number.h"

static int singleNumber(int* nums, int numsSize)
{
    int ret = 0;
    while(numsSize--)
    {
        ret = ret ^ nums[numsSize];
    }
    return ret;
}
int leet_136_single_number_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

