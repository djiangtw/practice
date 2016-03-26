/**
 *     Filename: leet_223_rectangle_area.c
 *  Description: 223. Rectangle Area
 *      Version: 1.0
 *      Created: 17:51:03 03-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/rectangle-area/
 */

#include "leet_header.h"
#include "leet_223_rectangle_area.h"

static int overlap(int a, int b, int c, int d)
{
    if(a <= c)
    {
        if(b <= c)
        {
            return 0;
        }
        else
        {
            if(b <= d)
            {
                return b - c;
            }
            else
            {
                return d - c;
            }
        }
    }
    else
    {
        if(a <= d)
        {
            if(b <= d)
            {
                return b - a;
            }
            else
            {
                return d - a;
            }
        }
        else
        {
            return 0;
        }
    }
}

static int area(int a, int b, int c, int d)
{
    int x;
    int y;
    x = c - a;
    y = d - b;
    return x * y;
}

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    int x;
    int y;
    int a;
    int b;

    a = area(A, B, C, D);
    b = area(E, F, G, H);

    x = overlap(A, C, E, G);
    y = overlap(B, D, F, H);
    return (a + b - x * y);
}

int leet_223_rectangle_area_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

