/*************************************************************************
	> File Name: 6.leetcode_142.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 25 Feb 2025 10:22:33 PM CST
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    while (p && p->next) {
        p = p->next->next;
        q = q->next;
        if (p == q) break;
    }
    if (p == NULL || p->next == NULL) return NULL;
    q = head;
    while (p != q) p = p->next, q = q->next;
    return p;
}
