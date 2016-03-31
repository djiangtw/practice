/**
 *     Filename: leet_238_product_of_array_except_self.c
 *  Description: 238. Product of Array Except Self
 *      Version: 1.0
 *      Created: 14:57:12 03-30-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/product-of-array-except-self/
 */

#include "leet_header.h"
#include "leet_238_product_of_array_except_self.h"

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int i;
    int *p, *q;

    p = (int*)malloc(sizeof(int) * numsSize);
    q = (int*)malloc(sizeof(int) * numsSize);

    p[0] = 1;
    q[numsSize - 1] = 1;
    for (i = 1; i < numsSize; i++) {
        p[i] = p[i - 1] * nums[i - 1];
        q[numsSize - i - 1] = q[numsSize - i] * nums[numsSize - i];
    }
    for (i = 0; i < numsSize; i++) {
        p[i] = p[i] * q[i]; 
    }

    free(q);
    *returnSize = numsSize;
    return p;
}

int leet_238_product_of_array_except_self_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

