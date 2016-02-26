/**
 *     Filename: leet_137_single_number_ii.c
 *  Description: 137. Single Number II
 *      Version: 1.0
 *      Created: 16:15:56 02-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *         Note: This is a very bad solution.
 *               TODO: improve it.
 */

#include "leet_header.h"
#include "leet_137_single_number_ii.h"

/**
 * @brief Given an array of integers, every element appears three times 
 *        except for one. Find that single one.
 *        Note:
 *        Your algorithm should have a linear runtime complexity. Could 
 *        you implement it without using extra memory?
 *
 * @param nums
 * @param numsSize
 *
 * @return 
 */
int singleNumber(int* nums, int numsSize)
{
    int ret;
    int i, j, unione;
    if(numsSize == 1)
    {
        return nums[0];
    }
    if(numsSize == 0)
    {
        return 0;
    }

    for (i = 0; i < numsSize; i++) {
        unione = 1;
        for (j = 0; j < numsSize; j++) {
            if(i == j)
            {
                continue;
            }
            if(nums[i] == nums[j])
            {
                unione = 0;
                break;
            }
        }
        if(unione == 1)
        {
            ret = nums[i];
            break;
        }
        ret = nums[i];
    }

    return ret;
}

static void test1(void)
{
    int a[] = {1, 3, 1, 1, 3, 4, 3, 5, 5, 5};
    int aa = 10;

    printf("%d\n", singleNumber(a, aa));
}

static void test2(void)
{
    int a[] = {1};
    int aa = 1;

    printf("%d\n", singleNumber(a, aa));
}

int leet_137_single_number_ii_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    return 0;
}

