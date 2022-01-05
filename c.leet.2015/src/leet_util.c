/*
 * =====================================================================================
 *
 *       Filename:  leet_util.c
 *
 *    Description:  Utilities for leet code
 *
 *        Version:  1.0
 *        Created:  2016年02月23日 14時47分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "leet_header.h"

void str_reverse(char* s)
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
#if 0
void add_tree(TreeNode_* t, int* depth)
{
    t->val = rand() % 100;
    t->left = t->right = NULL;
    /* add left node or not? */
    if((rand() % 2 == 1) && *depth != 0)
    {
        *depth--;
        add_tree(t->left, depth);
        *depth++;
    }
    /* add right node or not? */
    if((rand() % 2 == 1) && *depth != 0)
    {
        *depth--;
        add_tree(t->right, depth);
        *depth++;
    }
}

void rand_tree(TreeNode_* t, int depth)
{
    int a;
    time_t c;
    static int d;

    d = depth;

    srand((unsigned)time(&c));
    add_tree(t, &d);
}

void free_tree(TreeNode_* t)
{
    if(t->left != NULL)
    {
        free_tree(t->left);
    }
    if(t->right != NULL)
    {
        free_tree(t->right);
    }
    free(t);
}
#endif
