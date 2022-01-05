/**
 *     Filename: leet_219_contains_duplicate_ii.c
 *  Description: 219. Contains Duplicate II
 *      Version: 1.0
 *      Created: 09:30:57 03-18-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/contains-duplicate-ii/
 */

#include "leet_header.h"
#include "leet_219_contains_duplicate_ii.h"

#if 0
/*TODO: use a better solution for it.*/
typedef struct duplicate_count
{
    int n;
    int index;
} DUPC ;

bool containsNearbyDuplicate(int* nums, int numsSize, int k)
{
    DUPC* p;
    int i;
    p = (DUPC*)malloc(sizeof(DUPC) * numsSize);

}
#endif
bool containsNearbyDuplicate(int* nums, int numsSize, int k)
{
    /*
     *int a;
     *int b;
     */
    int i, j;

    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < k && (i + j + 1) < numsSize; j++) {
            if(nums[i] == nums[ i + j + 1])
            {
                return true;
            }
        }
    }
    return false;
}

static void test1(void)
{
    int a[] = {1, 2, 3};
    bool r;

    r = containsNearbyDuplicate(a, 3, 1);
    printf("%d\n", r);
}
int leet_219_contains_duplicate_ii_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

