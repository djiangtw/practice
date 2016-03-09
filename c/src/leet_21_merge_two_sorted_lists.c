/**
 *     Filename: leet_21_merge_two_sorted_lists.c
 *  Description: 21. Merge Two Sorted Lists
 *      Version: 1.0
 *      Created: 11:00:20 03-08-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 */

#include "leet_header.h"
#include "leet_21_merge_two_sorted_lists.h"

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode_t;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *ret, *p;

    ret = (l1->val < l2->val) ? l1 : l2;
    p = ret;
    while(!l1->next && !l2->next)
    {
        if(l1->val < l2->val)
        {
            l1 = l1->next;
        }
        else
        {
            l2 = l2->next;
        }
        p = p->next;
    }
    return ret;
}

int leet_21_merge_two_sorted_lists_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

