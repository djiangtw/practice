/**
 *     Filename: leet_160_intersection_of_two_linked_list.c
 *  Description: 160. Intersection of Two Linked Lists
 *      Version: 1.0
 *      Created: 15:03:18 03-23-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/intersection-of-two-linked-lists/
 */

#include "leet_header.h"
#include "leet_160_intersection_of_two_linked_list.h"

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
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode *p, *q, *mark;
    int sz_a = 0, sz_b = 0;

    p = headA;
    q = headB;
    while(p != NULL)
    {
        sz_a++;
        p = p->next;
    }
    while(q != NULL)
    {
        sz_b++;
        q = q->next;
    }
    p = headA;
    q = headB;
    while(sz_a != sz_b)
    {
        if(sz_a > sz_b)
        {
            sz_a--;
            p = p->next;
        }
        else if(sz_b > sz_a)
        {
            sz_b--;
            q = q->next;
        }
    }
    while(sz_a != 0)
    {
        if(p->val == q->val)
        {
            mark = p;
            while(p->val == q->val)
            {
                sz_a--;
                p = p->next;
                q = q->next;
                if(p == NULL)
                    break;
            }
            if(p == NULL)
            {
                return mark;
            }
        }
        else
        {
            sz_a--;
            p = p->next;
            q = q->next;
        }
        if(p == NULL)
            break;
    }
    return p;
}
#if 0
/* original version, there's something to be fixed. The fixed one is as above. */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode *p, *q, *mark;
    int sz_a = 0, sz_b = 0;

    p = headA;
    q = headB;
    while(p != NULL)
    {
        sz_a++;
        p = p->next;
    }
    while(q != NULL)
    {
        sz_b++;
        q = q->next;
    }
    p = headA;
    q = headB;
    while(sz_a != sz_b)
    {
        if(sz_a > sz_b)
        {
            sz_a--;
            p = p->next;
        }
        else if(sz_b > sz_a)
        {
            sz_b--;
            q = q->next;
        }
    }
    while(sz_a != 0)
    {
        if(p->val == q->val)
        {
            mark = p;
            while(p->val == q->val)
            {
                sz_a--;
                p = p->next;
                q = q->next;
            }
            if(p == NULL)
            {
                return mark;
            }
        }
        else
        {
            sz_a--;
            p = p->next;
            q = q->next;
        }
    }
    return p;
}
#endif

int leet_160_intersection_of_two_linked_list_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

