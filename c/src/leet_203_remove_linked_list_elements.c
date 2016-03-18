/**
 *     Filename: leet_203_remove_linked_list_elements.c
 *  Description: 203. Remove Linked List Elements
 *      Version: 1.0
 *      Created: 01:52:23 03-19-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/remove-linked-list-elements/
 */

#include "leet_header.h"
#include "leet_203_remove_linked_list_elements.h"

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *p;
    struct ListNode *pp;

    while(head != NULL)
    {
        if(head->val == val)
        {
            head = head->next;
        }
        else
        {
            break;
        }
    }
    if(head == NULL)
    {
        return head;
    }
    pp = head;
    p = pp->next;
    while(p != NULL)
    {
        if(p->val == val)
        {
            pp->next = p->next;
            p = pp->next;
        }
        else
        {
            pp = p;
            p = pp->next;
        }
    }
    return head;
}
#if 0
/* first trial */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *p;
    struct ListNode *pp;

    while(head != NULL)
    {
        if(head->val == val)
        {
            head = head->next;
        }
    }
    if(head == NULL)
    {
        return head;
    }
    pp = head;
    p = pp->next;
    while(p != NULL)
    {
        if(p->val == val)
        {
            pp->next = p->next;
        }
        pp = p;
        p = pp->next;
    }
    return head;
}
#endif

int leet_203_remove_linked_list_elements_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

