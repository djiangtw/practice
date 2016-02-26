/**
 *     Filename: leet_27_remove_element.c
 *  Description: 27. Remove Element
 *      Version: 1.0
 *      Created: 15:02:55 02-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_27_remove_element.h"
#include <string.h>

/**
 * @brief Given an array and a value, remove all instances of that value in 
 *        place and return the new length.
 *        The order of elements can be changed. It doesn't matter what you 
 *        leave beyond the new length.
 *
 * @param nums
 * @param numsSize
 * @param val
 *
 * @return 
 */
int removeElement(int* nums, int numsSize, int val)
{
    int i;
    int j;
    int ret = numsSize;
    int* copy_nums;
    copy_nums = (int*)malloc(sizeof(int) * numsSize);

    for (j = 0, i = 0; i < numsSize; i++)
    {
        if(nums[i] == val)
        {
            ret--;
        }
        else
        {
            copy_nums[j++] = nums[i];
        }
    }
    memcpy(nums, copy_nums, sizeof(int) * ret);
    free(copy_nums);
    return ret;
}

static void test_1()
{
    int a[] = {33, 22, 33, 22, 22, 33, 33, 44, 55};
    int aa = 9;
    printf("%d\n", removeElement(a, aa, 33));
}
int leet_27_remove_element_test(void)
{
    printf("%s\n", __FILE__);
    test_1();
    return 0;
}

