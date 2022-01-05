/**
 *     Filename: leet_38_count_and_say.c
 *  Description: 38. Count and Say
 *      Version: 1.0
 *      Created: 15:28:59 03-18-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/count-and-say/
 */

#include "leet_header.h"
#include "leet_38_count_and_say.h"
#include <string.h>

#define S_ALOC_SIZE 100

static void str_reverse(char* s)
{
    int sz;
    int i = 0;
    char tmp;
    sz = strlen(s);
    for (i = 0; i < sz / 2; i++) {
        tmp = s[i];
        s[i] = s[sz - i - 1];
        s[sz - i - 1] = tmp;
    }
}

char* countAndSay(int n)
{
    char *s;
    char *t;
    int s_aloc = S_ALOC_SIZE;
    int i;
    int j;

    if(n < 1)
    {
        return NULL;
    }

    s = (char*)malloc(sizeof(char) * s_aloc);
    t = (char*)malloc(sizeof(char) * s_aloc);
    s[0] = '1';
    s[1] = 0;
    for (i = 1; i < n; i++) {
        /* allocate more memory for string s and t */
        if (s_aloc < 2 * strlen(s))
        {
            s_aloc += 2 * strlen(s);
            memcpy(t, s, strlen(s) * sizeof(char) + 1);
            free(s);
            s = (char*)malloc(sizeof(char) * s_aloc);
            memcpy(s, t, strlen(t) * sizeof(char) + 1);
            free(t);
            t = (char*)malloc(sizeof(char) * s_aloc);
        }
        char* ps;
        char* pt;
        ps = s;
        pt = t;

        while(*ps != 0)
        {
            char tmp;
            char tt[100] = {0};
            char c;

            c = 0;
            tmp = *ps;
            while(*ps == tmp)
            {
                c++;
                ps++;
            }
#if 0
            sprintf(tt, "%d%c", c, tmp);
#else            

            tt[0] = tmp;
            j = 1;
            while(c != 0)
            {
                tt[j++] = c + '0';
                c = c / 10;
            }
            str_reverse(tt);
#endif            
            memcpy(pt, tt, strlen(tt) * sizeof(char));
            pt += strlen(tt);
//            printf("(%x, %c-%c, %d)", pt, *pt, tmp, strlen(tt));
//            printf("*%s\n", tt);
        }
        *pt = 0;
//        printf("%x\n", t);
        memcpy(s, t, strlen(t) * sizeof(char) + 1);
    }
    free(t);
    return s;
}


/*runtime error*/
#if 0
char* countAndSay(int n)
{
    char *s;
    char *t;
    int s_aloc = S_ALOC_SIZE;
    int i;
    int j;

    if(n < 1)
    {
        return NULL;
    }

    s = (char*)malloc(sizeof(char) * s_aloc);
    t = (char*)malloc(sizeof(char) * s_aloc);
    s[0] = '1';
    s[1] = 0;
    for (i = 1; i < n; i++) {
        /* allocate more memory for string s and t */
        if (s_aloc < 2 * strlen(s))
        {
            s_aloc += 2 * strlen(s);
            memcpy(t, s, strlen(s) * sizeof(char));
            free(s);
            s = (char*)malloc(sizeof(char) * s_aloc);
            memcpy(s, t, strlen(t) * sizeof(char));
            free(t);
            t = (char*)malloc(sizeof(char) * s_aloc);
        }
        char* ps;
        char* pt;
        ps = s;
        pt = t;

        while(*ps != 0)
        {
            char tmp;
            char tt[100] = {0};
            char c;

            c = 0;
            tmp = *ps;
            while(*ps == tmp)
            {
                c++;
                ps++;
            }
            tt[0] = tmp;
            j = 1;
            while(c != 0)
            {
                tt[j++] = c + '0';
                c = c / 10;
            }
            str_reverse(tt);
            memcpy(pt, tt, strlen(tt) * sizeof(char));
            pt += strlen(tt);
//            printf("(%x, %c-%c, %d)", pt, *pt, tmp, strlen(tt));
//            printf("*%s\n", tt);
        }
        *pt = 0;
//        printf("%x\n", t);
        memcpy(s, t, strlen(t) * sizeof(char));
    }
    free(t);
    return s;
}
#endif
#if 0
char* countAndSay(int n)
{
    char *s;
    char *t;
    int s_aloc = S_ALOC_SIZE;
    int i;
    
    if(n < 1)
    {
        return NULL;
    }

    s = (char*)malloc(sizeof(char) * s_aloc);
    t = (char*)malloc(sizeof(char) * s_aloc);
    s[0] = '1';
    s[1] = 0;
    for (i = 1; i < n; i++) {
        /* allocate more memory for string s and t */
        if (s_aloc < 2 * strlen(s))
        {
            memcpy(t, s, strlen(s) * sizeof(char));
            free(s);
            s = (char*)malloc(sizeof(char) * s_aloc);
            memcpy(s, t, strlen(t) * sizeof(char));
            free(t);
            t = (char*)malloc(sizeof(char) * s_aloc);
        }
        char* ps;
        char* pt;
        ps = s;
        pt = t;
        while(*ps != 0)
        {
            char tmp;
            char tt[10] = {0};
            char c;
            int j;
            c = 0;
            tmp = *ps;
            while(*ps == tmp)
            {
                c++;
                ps++;
            }
            tt[0] = tmp;
            j = 1;
            while(c != 0)
            {
                tt[j++] = c + '0';
                c = c / 10;
            }
            str_reverse(tt);
            memcpy(t, tt, strlen(tt) * sizeof(char));
            pt += strlen(tt);
        }
        *pt = 0;
        memcpy(s, t, strlen(t) * sizeof(char));
    }
    free(t);
    return s;
}
#endif

#if 0
char* countAndSay(int n)
{
    char* s;
    int a, b;
    int i;

    if(n < 1)
    {
        return NULL;
    }

    s = (char*)malloc(sizeof(char) * n * 2);
    memset(s, 0, sizeof(char) * n * 2);
    s[0] = '1';
    for (i = 0; i < n; i++) {
        char num = 0;
        int count = 0;
        int sz;
        num = *s;
        while(*s != 0)
        {
            while(*s == num)
            {
                count++;
            }

        }
    }
    while(n--)
    {
        
    }
}
#endif
static void test1(void)
{
    int a = 30;
    char* c;
    c = countAndSay(a);
    printf("%s\n", c);
    free(c);
}
int leet_38_count_and_say_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    return 0;
}

