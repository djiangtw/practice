/**
 *     Filename: leet_153_find_minimum_in_rotated_sorted_array.c
 *  Description: 153. Find Minimum in Rotated Sorted Array
 *      Version: 1.0
 *      Created: 18:06:57 02-25-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_153_find_minimum_in_rotated_sorted_array.h"

int findMin(int* nums, int numsSize)
{
    int ret;
    int i;
    ret = nums[0];
    for(i = 1; i < numsSize; i++)
    {
        if(ret > nums[i])
        {
            ret = nums[i];
        }
    }
    return ret;
}

int leet_153_find_minimum_in_rotated_sorted_array_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

