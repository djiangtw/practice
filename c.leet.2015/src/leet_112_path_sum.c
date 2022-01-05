/**
 *     Filename: leet_112_path_sum.c
 *  Description: 112. Path Sum
 *      Version: 1.0
 *      Created: 17:16:29 03-07-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_112_path_sum.h"

typedef struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode_t;

int has_path_sum(struct TreeNode* t, int sum, int target)
{
    if(t == NULL)
    {
        return false;
    }
    sum += t->val;
    if(t->left == NULL && t->right == NULL)
    {
        if(sum == target)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return has_path_sum(t->left, sum, target) || has_path_sum(t->right, sum, target);
}

bool hasPathSum(struct TreeNode* root, int sum)
{
    return has_path_sum(root, 0, sum);
}

int leet_112_path_sum_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

