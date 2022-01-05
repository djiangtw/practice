/**
 *     Filename: leet_260_single_number_iii.c
 *  Description: 260. Single Number III
 *      Version: 1.0
 *      Created: 17:05:42 03-15-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/single-number-iii/
 */

#include "leet_header.h"
#include "leet_260_single_number_iii.h"
#include <string.h>

int* singleNumber(int* nums, int numsSize, int* returnSize) 
{
    int* r;
    int xorsum = 0;
    int i, j;

    *returnSize = 2;
    r = (int*)malloc(sizeof(int) * 2);
    r[0] = r[1] = 0;

    for (i = 0; i < numsSize; i++) {
        xorsum = xorsum ^ nums[i];
    }

    for (i = 0; i < 32; i++) {
        if((xorsum & (0x1 << i)) != 0)
        {
            j = i;
            break;
        }
    }

    for (i = 0; i < numsSize; i++) {
        if((nums[i] & (0x1 << j)) != 0)
        {
            r[0] = r[0] ^ nums[i];
        }
        else
        {
            r[1] = r[1] ^ nums[i];
        }
    }

    return r;
}

static int* singleNumber_2(int* nums, int numsSize, int* returnSize) 
{
    int* r;
    int i, j;
    int got;
    int k = 0;

    r = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;

    for (got = 0, i = 0; i < numsSize; i++) {
        if(nums[i] == 0)
        {
            got++;
        }
    }
    if(got == 1)
    {
        r[k++] = 0;
    }
    for (i = 0; i < numsSize; i++) {
        if(nums[i] == 0)
        {
            continue;
        }
        for (got = 0, j = i; j < numsSize; j++) {
            if((nums[i] ^ nums[j]) == 0)
            {
                nums[i] = nums[j] = 0;
                got = 1;
                break;
            }
        }
        if(got == 0)
        {
            r[k++] = nums[i];
        }
    }
    /*printf("%d\n", k);*/
    return r;
}

static int cmpf(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 *
 * only passed 9/30 tests.
 */
int* singleNumber_1(int* nums, int numsSize, int* returnSize) 
{
    int* ret;
    int* r;
    int k = 0;
    int i;
    r = (int*)malloc(sizeof(int) * numsSize);
    qsort(nums, numsSize, sizeof(int), cmpf);

    for (i = 0; i < numsSize; i++) {
        if(i == numsSize - 1)
        {
            r[k] = nums[i];
            k++;
        }
        if(nums[i] != nums[i+1])
        {
            r[k] = nums[i];
            k++;
        }
        else
        {
            i++;
        }
    }
    ret = (int*)malloc(sizeof(int) * k);
    memcpy(ret, r, sizeof(int) * k);
    free(r);

    return ret;
}

static void test1(void)
{
    int a[] = {1, 1, 2, 2, 3, 4};
    int b = 0;
    int* c;

    c = singleNumber_1(a, 6, &b);
    free(c);
}

static void test2(void)
{
    int a[] = {1, 1, 2, 2, 3, 4};
    int b = 0;
    int* c;

    c = singleNumber_2(a, 6, &b);
    free(c);
}

static void test3(void)
{
    int a[] = {1, 1, 2, 2, 3, 4};
    int b = 0;
    int* c;

    c = singleNumber(a, 6, &b);
    printf("%d, %d\n", c[0], c[1]);
    free(c);
}

int leet_260_single_number_iii_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    test3();
    return 0;
}

