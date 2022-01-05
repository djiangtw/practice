/**
 *     Filename: leet_20_valid_parentheses.c
 *  Description: 20. Valid Parentheses
 *      Version: 1.0
 *      Created: 15:59:36 03-22-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/valid-parentheses/
 */

#include "leet_header.h"
#include "leet_20_valid_parentheses.h"
#include <string.h>

bool isValid(char* s)
{
    char *p;
    int sz;
    int pp;

    sz = strlen(s) + 1;
    p = (char*)malloc(sizeof(char) * sz);
    pp = 0;
    while(*s != 0)
    {
        if(pp < 0)
        {
            return false;
        }
        if(*s == '(' || *s == '[' || *s == '{')
        {
            p[pp] = *s;
            pp++;
        }
        else if(*s == ')' || *s == ']' || *s == '}')
        {
            char tmp;
            pp--;
            tmp = p[pp];
            p[pp] = 0;
//            printf("%c(%d), ", tmp, pp);
            switch (tmp)
            {
                case '(':
                    tmp = ')';
                    break;
                case '[':
                    tmp = ']';
                    break;
                case '{':
                    tmp = '}';
                    break;
            }
            if(tmp != *s)
            {
                return false;
            }
        }
        s++;
    }
    if(p[pp] == 0 && pp == 0)
    {
        return true;
    }
    free(p);
    return false;
}
#if 0
struct paren_t
{
    char v1; /* value */ 
    char v2; /* value */ 
    int c; /* count */ 
};

bool isValid(char* s)
{
    char *p, *q;
    int a[3] = {0};
    int sz;
    int pp, pq;

    sz = strlen(s);
    p = (char*)malloc(sizeof(char) * sz);
    q = (char*)malloc(sizeof(char) * sz);
    pp = pq = 0;
    while(*s != 0)
    {
        if(*s == '(' || *s == '[' || *s == '{')
        {
            p[pp++] = *s;
        }
        else if(*s == ')' || *s == ']' || *s == '}')
        {
            char tmp;
            tmp = p[--pp];
            p[pp] = 0;
            switch (tmp)
            {
                case ')':
                    tmp = '(';
                    break;
                case ']':
                    tmp = '[';
                    break;
                case '}':
                    tmp = '{';
                    break;
            }
            if(tmp != *s)
            {
                return false;
            }
        }
    }
    if(p[pp] == 0 && pp == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
#endif

int leet_20_valid_parentheses_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

