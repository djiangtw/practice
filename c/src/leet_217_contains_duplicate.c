/**
 *     Filename: leet_217_contains_duplicate.c
 *  Description: 217. Contains Duplicate
 *      Version: 1.0
 *      Created: 11:00:54 02-25-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_217_contains_duplicate.h"

static int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

/**
 * @brief Given an array of integers, find if the array contains any duplicates. 
 *        Your function should return true if any value appears at least twice in 
 *        the array, and it should return false if every element is distinct.
 *
 * @param nums
 * @param numsSize
 *
 * @return 
 */
bool containsDuplicate(int* nums, int numsSize)
{

    int i;

    qsort(nums, numsSize, sizeof(int), compare);
    if(numsSize <= 1)
    {
        return false;
    }
    for (i = 0; i < numsSize - 1; i++) {
        if(nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
}
int leet_217_contains_duplicate_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

