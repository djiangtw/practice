/**
 *     Filename: leet_1_two_sum.c
 *  Description: 1. Two Sum
 *      Version: 1.0
 *      Created: 15:51:34 02-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *         Note: https://leetcode.com/submissions/detail/54589806/
 *               TODO: make it runs faster. a sorted input might be better, try it.
 */

#include "leet_header.h"
#include "leet_1_two_sum.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target)
{
    int i, j;
    int* ret;

    ret = (int*)malloc(sizeof(int) * 2);

    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target)
            {
                ret[0] = i;
                ret[1] = j;

            }
        }
    }

    return ret;
}

void test1(void)
{
    int a[] = {3, 2, 4};
    int b = 6;
    int* r;

    r = twoSum(a, 3, b);
    printf("[%d, %d]\n", r[0], r[1]);
    free(r);
}

int leet_1_two_sum_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

