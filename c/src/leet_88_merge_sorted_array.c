/**
 *     Filename: leet_88_merge_sorted_array.c
 *  Description: 88. Merge Sorted Array
 *      Version: 1.0
 *      Created: 11:10:40 03-11-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/merge-sorted-array/
 */

#include "leet_header.h"
#include "leet_88_merge_sorted_array.h"
#include <string.h>

/*
 *static void swap_int(int* a, int* b)
 *{
 *    *a = *a ^ *b;
 *    *b = *b ^ *a;
 *    *a = *a ^ *b;
 *}
 */

void merge(int* nums1, int m, int* nums2, int n)
{
    int* tmp;
    int a, b;

    tmp = (int*)malloc(sizeof(int) * m);
    memcpy(tmp, nums1, sizeof(int) * m);

    for (a = 0, b = 0; a < m && b < n;)
    {
        if(tmp[a] < nums2[b])
        {
            nums1[a + b] = tmp[a];
            a++;
        }
        else
        {
            nums1[a + b] = nums2[b];
            b++;
        }
    }
    if(a == m)
    {
        while(b < n)
        {
            nums1[a + b] = nums2[b];
            b++;
        }
    }
    else
    {
        while(a < m)
        {
            nums1[a + b] = tmp[a];
            a++;
        }
    }
    free(tmp);
}

int leet_88_merge_sorted_array_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

