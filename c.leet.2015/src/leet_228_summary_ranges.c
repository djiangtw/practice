/**
 *     Filename: leet_228_summary_ranges.c
 *  Description: 228. Summary Ranges
 *      Version: 1.0
 *      Created: 17:19:59 03-31-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/summary-ranges/
 */

#include "leet_header.h"
#include "leet_228_summary_ranges.h"
#include <string.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    char bb[30] = {0};
    int i;
    int p, q;
    int sz = 0;
    char** r;

    for (i = 0; i < numsSize;) {
        p = q = nums[i];
        while (i < numsSize)
        {
            if(nums[i] == q)
            {
                i++;
                q++;
            }
            else
            {
                break;
            }
        }
        sz++;
    }

    r = (char**)malloc(sizeof(char*) * sz);
    *returnSize = sz;
    //printf("%d\n", sz);
    sz = 0;

    for (i = 0; i < numsSize;) {
        p = q = nums[i];
        while (i < numsSize)
        {
            if(nums[i] == q)
            {
                i++;
                q++;
            }
            else
            {
                break;
            }
        }
        q = nums[i - 1];

        if(p == q)
        {
            sprintf(bb, "%d", p);
        }
        else
        {
            sprintf(bb, "%d->%d", p, q);
        }
        r[sz] = (char*)malloc(sizeof(char) * strlen(bb));
        strcpy(r[sz], bb);
        sz++;
    }

    return r;
}

#if 0

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize)
{
    char bb[30] = {0};
    int i;
    int p, q;
    int sz = 0;
    char** r;

    for (i = 0; i < numsSize; i++) {
        p = q = nums[i];
        while (i < numsSize)
        {
            if(nums[i] == q)
            {
                i++;
                q++;
            }
            else
            {
                break;
            }
        }
        sz++;
    }
    r = (char**)malloc(sizeof(char*) * sz);
    *returnSize = sz;
    /*printf("%d\n", sz);*/
    sz = 0;

    for (i = 0; i < numsSize; i++) {
        p = q = nums[i];
        while (i < numsSize)
        {
            if(nums[i] == q)
            {
                i++;
                q++;
            }
            else
            {
                break;
            }
        }
        q = nums[i - 1];

        if(p == q)
        {
            sprintf(bb, "%d", p);
        }
        else
        {
            sprintf(bb, "%d->%d", p, q);
        }
        r[sz] = (char*)malloc(sizeof(char) * strlen(bb));
        strcpy(r[sz], bb);
        sz++;
    }

    return r;
}
#endif

int leet_228_summary_ranges_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

