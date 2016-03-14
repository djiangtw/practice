/**
 *     Filename: leet_165_compare_version_numbers.c
 *  Description: 165. Compare Version Numbers
 *      Version: 1.0
 *      Created: 16:11:07 03-14-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/compare-version-numbers/
 */

#include "leet_header.h"
#include "leet_165_compare_version_numbers.h"
#include <string.h>

static int char_counts(char* s, char c)
{
    int r = 0;
    while(*s != 0)
    {
        if(*s == c)
        {
            r++;
        }
        s++;
    }
    return r;
}

static void assign_version_values(char* s, int* v, int sz)
{
    char* p;
    int i;
    p = s;

    for (i = 0; i < sz; i++) {
        s = p;
        while(*p != '.' && *p != 0)
        {
            p++;
        }
        *p = 0;
        v[i] = atoi(s);
        p++;
    }
}

/**
 * @brief compare two versions in string.
 *
 * @param version1
 * @param version2
 *
 * @return 
 *
 *    Actually, the free ops are non-sense
 *    TODO: refactor it!
 */
int compareVersion(char* version1, char* version2)
{
    int sz1, sz2; /* number of sub-versions */ 
    char* p1;
    char* p2;
    int* v1;
    int* v2;
    int cmp = -2;
    int i;

    p1 = version1;
    p2 = version2;
    sz1 = char_counts(p1, '.') + 1;
    sz2 = char_counts(p2, '.') + 1;
    v1 = (int*)malloc(sizeof(int) * sz1);
    v2 = (int*)malloc(sizeof(int) * sz2);

    assign_version_values(version1, v1, sz1);
    assign_version_values(version2, v2, sz2);
    
    i = 0;
    /*printf("%d, %d", v1[0], v2[0]);*/
    /*printf("%d, %d", sz1, sz2);*/
    while(sz1 != 0 && sz2 != 0)
    {
        sz1--;
        sz2--;

        if(v1[i] > v2[i])
        {
            return 1;
        }
        else if(v1[i] < v2[i])
        {
            return -1;
        }
        i++;
    }
    if(sz1 == sz2)
    {
        return 0;
    }
    else if(sz1 != 0)
    {
        int tmp = 0;
        while(sz1--)
        {
            tmp += v1[i];
            i++;
        }
        if(tmp == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if(sz2 != 0)
    {
        int tmp = 0;
        while(sz2--)
        {
            tmp += v2[i];
            i++;
        }
        if(tmp == 0)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    
    free(v1);
    free(v2);
    return cmp;
}
/**
 * Failed in such cases;
 *    Input:
 *    "1.1"
 *    "1.01.0"
 *    Output:
 *    -1
 *    Expected:
 *    0
 *
 * TODO:
 *    in the bottom of this function, checking the remained characters are {0, '.', '0'}
 *    and the answer might be correct;
 */
int compareVersion_1(char* version1, char* version2)
{
    int n1;
    int n2;
    char* p1;
    char* p2;

    p1 = version1;
    p2 = version2;
    while(*version1 == 0 || *version2 == 0)
    {
        version1 = p1;
        version2 = p2;
        *p1 = 0;
        while(*p2 != '.' && *p2 != 0)
        {
            p2++;
        }
        *p2 = 0;
        n1 = atoi(version1);
        n2 = atoi(version2);
        p1++;
        p2++;
        if(n1 > n2)
        {
            return 1;
        }
        else if (n1 < n2)
        {
            return -1;
        }
        else
        {
            if(*p1 != 0 && *p2 != 0)
            {
                continue;
            }
            else if(*p1 != 0 && *p2 == 0)
            {
                return 1;
            }
            else if(*p1 == 0 && *p2 != 0)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
    return 2;
}

int leet_165_compare_version_numbers_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

