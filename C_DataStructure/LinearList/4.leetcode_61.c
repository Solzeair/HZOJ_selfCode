/*************************************************************************
	> File Name: 4.leetcode_61.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 25 Feb 2025 09:29:34 PM CST
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int getLen(struct ListNode *head) {
    int n = 0;
    struct ListNode *p = head;
    while (p) {
        p = p->next;
        n++;
    } 
    return n;
}

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL) return head;
    int n = getLen(head);
    // 预处理，减少次数，k 最大为 n - 1
    k %= n;
    if (k == 0) return head;
    struct ListNode *p = head, *q = head;
    
    // 单指针从 head 开始，移动 (n - 1) - k 次，到达末尾节点，理解减法意义
    for (int i = 0; i < n - 1 - k; i++) q = q->next;

    // 双指针间隔判断，当 p == NULL 时，q 到达末尾节点
    // for (int i = 0; i <= k; i++) p = p->next;
    // while (p) p = p->next, q = q->next;

    p = q->next;
    q->next = NULL;
    q = p;
    while (p->next) p = p->next;
    p->next = head;
    return q;   
}
