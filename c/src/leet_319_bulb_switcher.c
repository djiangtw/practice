/**
 *     Filename: leet_319_bulb_switcher.c
 *  Description: 319. Bulb Switcher
 *      Version: 1.0
 *      Created: 13:44:10 03-23-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/bulb-switcher/
 */

#include "leet_header.h"
#include "leet_319_bulb_switcher.h"

static int m_sqrt(int n)
{
    int r = 0;
    while(r * r <= n)
    {
        r++;
    }
    return --r;
}

int bulbSwitch(int n)
{
    return m_sqrt(n);
}

int leet_319_bulb_switcher_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

