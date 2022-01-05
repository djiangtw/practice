/**
 *     Filename: leet_290_word_pattern.c
 *  Description: 290. Word Pattern
 *      Version: 1.0
 *      Created: 10:25:36 03-10-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/word-pattern/
 */

#include "leet_header.h"
#include "leet_290_word_pattern.h"
#include <string.h>

bool wordPattern(char* pattern, char* str)
{
    int counts;
    int whitespaces = 0;
    char* ss;
    char** ss_arr;
    char** index_arr;
    char* index;
    int i;
    int j;
    bool ret = true;

    counts = strlen(pattern);
    ss = str;
    while(*ss != 0)
    {
        if(*ss == ' ')
        {
            whitespaces++;
        }
        ss++;
    }
    if(counts != whitespaces + 1)
    {
        return false;
    }

    ss_arr = (char**)malloc(sizeof(char*) * counts);
    index_arr = (char**)malloc(sizeof(char*) * counts);
    index = (char*)malloc(sizeof(char) * counts);
    memset(index_arr, 0, sizeof(char*) * counts);
    memset(index, 0, sizeof(char) * counts);

    ss = str;
    ss_arr[0] = ss;
    for (i = 1; i < counts; i++) {
        while(*ss != ' ')
        {
            ss++;
        }
        *ss = 0;
        ss_arr[i] = ++ss;
    }

    for (i = 0; i < counts; i++) {
        int id;
        for (j = 0; j < counts; j++) {
            if(index[j] == 0)
            {
                id = j;
                index[j] = pattern[i];
                index_arr[j] = ss_arr[i];
                break;
            }
            else if(index[j] == pattern[i])
            {
                id = j;
                break;
            }
        }
        if(strcmp(ss_arr[i], index_arr[id]) != 0)
        {
            ret = false;
            break;
        }
    }
    for (i = 0; index_arr[i] != 0 && i < counts; i++) {
        for (j = i+1; index_arr[j] != 0 && j < counts; j++) {
            if(strcmp(index_arr[i], index_arr[j]) == 0)
            {
                ret = false;
                break;
            }
        }
    }

    free(ss_arr);
    free(index_arr);
    free(index);
    return ret;;
}

static void test1(void)
{
    bool c;
    char pattern[] = "abba";
    char str[] = "dog cat cat dog";
    c = wordPattern(pattern, str);
    printf("%s\n", (c)? "true": "false");
}

static void test2(void)
{
    bool c;
    char pattern[] = "cbbc";
    char str[] = "dog cat cat dog";
    c = wordPattern(pattern, str);
    printf("%s\n", (c)? "true": "false");
}

static void test3(void)
{
    bool c;
    char pattern[] = "abba";
    char str[] = "pig cat cat dog";
    c = wordPattern(pattern, str);
    printf("%s\n", (c)? "true": "false");
}

static void test4(void)
{
    bool c;
    char pattern[] = "abba";
    char str[] = "dog dog dog dog";
    c = wordPattern(pattern, str);
    printf("%s\n", (c)? "true": "false");
}

static void test5(void)
{
    bool c;
    char pattern[] = "hut";
    char str[] = "pig cat dog";
    c = wordPattern(pattern, str);
    printf("%s\n", (c)? "true": "false");
}
int leet_290_word_pattern_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}

