/**
 *     Filename: leet_205_isomorphic_strings.c
 *  Description: 205. Isomorphic Strings
 *      Version: 1.0
 *      Created: 20:53:56 03-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/isomorphic-strings/
 */

#include "leet_header.h"
#include "leet_205_isomorphic_strings.h"

bool isIsomorphic(char* s, char* t)
{
    int i;
    char ss[256] = {0};
    char tt[256] = {0};

    while(*s != 0)
    {
        if(ss[(int)(*s)] == 0)
        {
            ss[(int)(*s)] = *t;
        }
        else if(ss[(int)(*s)] != *t)
        {
            return false;
        }
        
        if(tt[(int)(*t)] == 0)
        {
            tt[(int)(*t)] = *s;
        }
        else if(tt[(int)(*t)] != *s)
        {
            return false;
        }
        s++;
        t++;
    }
    return true;
}

#if 0
/*failed when {s, t} = {"ab", "aa"}*/

bool isIsomorphic(char* s, char* t)
{
    int i;
    char ss[26] = {0};

    while(*s != 0)
    {
        if(ss[(int)(*s)] == 0)
        {
            ss[(int)(*s)] = *t;
        }
        else if(ss[(int)(*s)] != *t)
        {
            return false;
        }
        s++;
        t++;
    }
    return true;
}
#endif
int leet_205_isomorphic_strings_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

