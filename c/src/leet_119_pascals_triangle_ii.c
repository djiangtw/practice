/**
 *     Filename: leet_119_pascals_triangle_ii.c
 *  Description: 119. Pascal's Triangle II
 *      Version: 1.0
 *      Created: 13:46:24 03-10-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/pascals-triangle-ii/
 */

#include "leet_header.h"
#include "leet_119_pascals_triangle_ii.h"

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize)
{
    int* ret;
    int* tmp;
    int i, j;
    /*returnSize = (int*)malloc(sizeof(int));*/
    *returnSize = rowIndex + 1;

    ret = (int*)malloc(sizeof(int) * (rowIndex + 1));
    tmp = (int*)malloc(sizeof(int) * (rowIndex + 1));

    for (i = 0; i < rowIndex + 1; i++) {
        ret[0] = 1;
        ret[i] = 1;
        for (j = 1; j < i; j++) {
            ret[j] = tmp[j - 1] + tmp[j];
        }
        for (j = 0; j < i + 1; j++) {
            tmp[j] = ret[j];
        }
    }
    
    free(tmp);
    return ret;
}

static void test1(void)
{
    int r;
    int* arr;
    int i;

    arr = getRow(16, &r);
    printf("%d\n", r);
    for (i = 0; i < r; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    free(arr);
}

int leet_119_pascals_triangle_ii_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

