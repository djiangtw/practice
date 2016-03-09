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

static void print_list(struct ListNode* l);
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *ret;
    struct ListNode *p;

    ret = (struct ListNode*)malloc(sizeof(struct ListNode));
    p = ret;
    while(l1 != NULL || l2 != NULL)
    {
        if(l1 == NULL)
        {
            p->next = l2;
            l2 = l2->next;
        }
        else if(l2 == NULL)
        {
            p->next = l1;
            l1 = l1->next;
        }
        else if(l1->val <= l2->val)
        {
            p->next = l1;
            l1 = l1->next;
        }
        else
        {
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
    }
    p = ret->next;
    free(ret);
    return p;
}

static struct ListNode* new_list(int* a, int size)
{
    struct ListNode *r, *p;
    int i;

    r = (struct ListNode*)malloc(sizeof(struct ListNode) * size);

    p = r;
    for (i = 0; i < size - 1; i++) {
        r->val = a[i];
        r->next = r + 1;
        r++;
    }
    r->val = a[size - 1];
    r->next = NULL;
    return p;
}

static void print_list(struct ListNode* l)
{
    struct ListNode* p;
    p = l;
    while(p != NULL)
    {
        printf("%d ->", p->val);
        /*printf("%d(%x) ->", p->val, p);*/
        p = p->next;
    }
    printf("%s\n", "NULL");
}

static void test1(void)
{
    int a[] = {1, 3, 4};
    int b[] = {2, 5, 7, 8};
    struct ListNode *pa, *pb;
    
    pa = new_list(a, 3);
    pb = new_list(b, 4);

    print_list(pa);
    print_list(pb);
    /*print_list(pa);*/
    /*print_list(pb);*/
    free(pa);
    free(pb);
}

static void test2(void)
{
    int a[] = {1, 3, 4};
    int b[] = {2, 5, 7, 8};
    struct ListNode *pa, *pb;
    struct ListNode *pc;
    
    pa = new_list(a, 3);
    pb = new_list(b, 4);

    printf("%s\n", "test2");
    pc = mergeTwoLists(pa, pb);
    print_list(pc);
    free(pa);
    free(pb);
}

int leet_21_merge_two_sorted_lists_test(void)
{
    printf("%s\n", __FILE__);
    test1();
    test2();
    return 0;
}

