/**
 *     Filename: leet_189_rotate_array.c
 *  Description: 189. Rotate Array
 *      Version: 1.0
 *      Created: 09:36:27 02-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_189_rotate_array.h"
#include <string.h>

/**
 * @brief Rotate an array of n elements to the right by k steps.
 *        For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] 
 *        is rotated to [5,6,7,1,2,3,4].
 *
 * @param nums
 * @param numsSize
 * @param k
 */
void rotate(int* nums, int numsSize, int k)
{
    int i;
    int* copy_nums;

    copy_nums = (int*)malloc(sizeof(int) * numsSize);
    /* this memcpy is redundant */
    /*memcpy(copy_nums, nums, sizeof(int) * numsSize);*/

    for (i = 0; i < numsSize; i++) 
    {
        copy_nums[(i + k) % numsSize] = nums[i];
    }
    memcpy(nums, copy_nums, sizeof(int) * numsSize);

    free(copy_nums);
    
}

int leet_189_rotate_array_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

