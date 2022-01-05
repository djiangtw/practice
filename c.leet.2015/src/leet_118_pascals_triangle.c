/**
 *     Filename: leet_118_pascals_triangle.c
 *  Description: 118. Pascal's Triangle
 *      Version: 1.0
 *      Created: 12:53:14 03-10-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/pascals-triangle/
 */

#include "leet_header.h"
#include "leet_118_pascals_triangle.h"

/**
 * Return an array of arrays.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes)
{
    int* size_arr;
    int** ret;
    int i;
    int j;

    size_arr = (int*)malloc(sizeof(int) * numRows);
    ret = (int**)malloc(sizeof(int*) * numRows);
    for (i = 0; i < numRows; i++) {
        size_arr[i] = i + 1;
        ret[i] = (int*)malloc(sizeof(int) * size_arr[i]);
        ret[i][0] = 1;
        ret[i][size_arr[i] - 1] = 1;
        for (j = 1; j < size_arr[i] - 1; j++) {
            ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
        }
    }

    *columnSizes = size_arr;
    return ret;
}

int leet_118_pascals_triangle_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

