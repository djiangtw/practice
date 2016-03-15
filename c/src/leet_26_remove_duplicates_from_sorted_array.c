/**
 *     Filename: leet_26_remove_duplicates_from_sorted_array.c
 *  Description: 26. Remove Duplicates from Sorted Array
 *      Version: 1.0
 *      Created: 09:57:00 03-15-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

#include "leet_header.h"
#include "leet_26_remove_duplicates_from_sorted_array.h"

int removeDuplicates(int* nums, int numsSize)
{
    int* p;
    int* q;
    int new_size;
    if(numsSize == 0)
    {
        return 0;
    }
    p = q = nums;
    new_size = 1;
    while(--numsSize)
    {
        p++;
        if(*p != *q)
        {
            q++;
            *q = *p;
            new_size++;
        }
    }
    return new_size;
}

int leet_26_remove_duplicates_from_sorted_array_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

