/**
 *     Filename: leet_169_majority_element.c
 *  Description: 169. Majority Element
 *      Version: 1.0
 *      Created: 14:36:11 02-25-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_169_majority_element.h"

/* copied from leet_169 */
static int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

/**
 * @brief Given an array of size n, find the majority element. The majority 
 *        element is the element that appears more than n/2 times.
 *        You may assume that the array is non-empty and the majority element 
 *        always exist in the array.
 *
 * @param nums
 * @param numsSize
 *
 * @return 
 */
int majorityElement(int* nums, int numsSize)
{
    int i;
    int pick;
    int pick_counts;
    int tmp_counts;

    qsort(nums, numsSize, sizeof(int), compare);

    tmp_counts = pick_counts = 1;
    pick = nums[0];
    for (i = 1; i < numsSize; i++) {
        if(nums[i] == nums[i - 1])
        {
            tmp_counts++;
        }
        else
        {
            tmp_counts = 1;
        }
        if(tmp_counts > pick_counts)
        {
            pick = nums[i];
            pick_counts = tmp_counts;
        }        
    }
    return pick;
}

int leet_169_majority_element_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

