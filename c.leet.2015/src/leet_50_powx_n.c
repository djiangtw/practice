/**
 *     Filename: leet_50_powx_n.c
 *  Description: 50. Pow(x, n)
 *      Version: 1.0
 *      Created: 14:12:07 03-23-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/powx-n/
 */

#include "leet_header.h"
#include "leet_50_powx_n.h"

/* TODO: find a better solution for this. */
double myPow(double x, int n) {
    double r = 1.0;
    int c = n;
    
    if(n < 0 )
    {
        c = -n;
    }

    if(x == 1.0)
        return x;
    if(x == -1.0)
        return (n % 2 == 0) ? 1.0: -1.0;
    while(c--)
    {
        r = r * x;
        if(r == 0.0)
            return 0.0;
        if((1/r) == 0.0)
            return 0.0;
    }
    
    return (n < 0) ? 1 / r: r;
}

int leet_50_powx_n_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

