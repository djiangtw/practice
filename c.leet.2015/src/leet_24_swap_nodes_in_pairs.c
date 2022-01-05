/**
 *     Filename: leet_24_swap_nodes_in_pairs.c
 *  Description: 24. Swap Nodes in Pairs
 *      Version: 1.0
 *      Created: 19:51:27 03-26-2016
 *     Revision: none
 *     Compiler: gcc
 *       Author: Danny Jiang
 *          URL: https://leetcode.com/problems/swap-nodes-in-pairs/
 */

#include "leet_header.h"
#include "leet_24_swap_nodes_in_pairs.h"

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* swapPairs(struct ListNode* head)
{
    struct ListNode *pp, *p, *q, *c;
    if(head)
    {
        p = head;
        
    }
    else
    {
        return head;
    }

    if( head->next )
    {
        head = head->next;
        q = head;
        c = q->next;
        pp = q->next = p;
        p->next = c;
    }
    else
    {
        return head;
    }

    while(c)
    {
        p = c;
        if(c->next)
        {
            q = c->next;
            c = q->next;
            pp->next = q;
        }
        else
        {
            break;
        }
        pp = q->next = p;
        p->next = c;
    }
    
    return head;
}
#if 0
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head)
{
    struct ListNode *p, *q, *c;
    if(head)
    {
        p = head;
    }
    else
    {
        return head;
    }

    if( head->next )
    {
        head = head->next;
        q = head;
        c = q->next;
        q->next = p;
        p->next = c;
    }
    else
    {
        return head;
    }

    while(c)
    {
        p = c;
        if(c->next)
        {
            q = c->next;
            c = q->next;
        }
        else
        {
            break;
        }
        q->next = p;
        p->next = c;
    }
    
    return head;
}
#endif

int leet_24_swap_nodes_in_pairs_test(void)
{
    printf("%s\n", __FILE__);
    return 0;
}

