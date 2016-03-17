/**
 *     Filename: leet_70_climbing_stairs.c
 *  Description: 70. Climbing Stairs
 *      Version: 1.0
 *      Created: 14:58:23 03-17-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/climbing-stairs/
 *         Note: this is kind of high-school math problem, finding the 
 *               possible ways to from one spot to another spot.
 *            n= 1, 2, 3, 4, 5, 6, ...   
 *               1, 2, 3, 5, 8, 13 ...
 *               a, b, c
 *                     a  c
 *                     b
 *                  a, b, c
 *                        a  c
 *                        b
 *                     a, b, c
 */

#include "leet_header.h"
#include "leet_70_climbing_stairs.h"

/**
 * @brief You are climbing a stair case. It takes n steps to reach to the top.
 *        Each time you can either climb 1 or 2 steps. In how many distinct ways 
 *        can you climb to the top?
 *
 * @param n
 *
 * @return 
 */
int climbStairs(int n)
{
    int a, b, c;
    int i;

    a = 1;
    b = 2;
    if(n < 3)
    {
        return n;
    }
    c = a + b;
    for (i = 3; i < n; i++) {
        a = c;
        c = a + b;
        b = a;
    }
    return c;
}

int leet_70_climbing_stairs_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

