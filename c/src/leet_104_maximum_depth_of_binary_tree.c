/**
 *     Filename: leet_104_maximum_depth_of_binary_tree.c
 *  Description: 104. Maximum Depth of Binary Tree
 *      Version: 1.0
 *      Created: 15:16:57 03-10-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/maximum-depth-of-binary-tree/
 */

#include "leet_header.h"
#include "leet_104_maximum_depth_of_binary_tree.h"

 typedef struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 }TreeNode_t;

static int max_depth(int a, int b)
{
    return (a > b) ? a: b;
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 *
 * as root is NULL, return 0
 * as root has no children, return 1
 * return 0 when current node is NULL, and plus 1 back when returns from a NULL node.
 */
int maxDepth(struct TreeNode* root)
{
    int d_left, d_right;
    if(root == NULL)
    {
        return 0;
    }
    d_left = maxDepth(root->left);
    d_right = maxDepth(root->right);
    return max_depth(d_left + 1, d_right + 1);
}

int leet_104_maximum_depth_of_binary_tree_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

