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
 *               a better solution is done. too see if there's any better one.
 */

#include "leet_header.h"
#include "leet_137_single_number_ii.h"


/*a better solution*/
static int singleNumber_1(int* nums, int numsSize)
{
    int ret = 0;
    int bitsum[32] = {0};
    int i, j;

    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < 32; j++) {
            bitsum[j] += (nums[i] >> j) & 0x1;
        }
    }
    for (i = 0; i < 32; i++) {
        ret = ret | ((bitsum[i] % 3 ) << i);
    }

    return ret;
}
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
static int singleNumber(int* nums, int numsSize)
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

static void test3(void)
{
    int a[] = {1};
    int aa = 1;

    printf("%d\n", singleNumber_1(a, aa));
}

int leet_137_single_number_ii_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    test3();
    return 0;
}

