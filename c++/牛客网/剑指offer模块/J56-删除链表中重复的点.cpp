#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:

    ListNode* deleteDuplication(ListNode* pHead) {
        ListNode* head = new ListNode(INT_MAX); // 头节点
        ListNode* p = head;
        while (pHead != NULL) {
            if (pHead->next == NULL || pHead->val != pHead->next->val) { // 只有一个或者下一个和这个不同，保留
                p->next = pHead;
                p = p->next;
            }    
            while (pHead->next != NULL && pHead->val == pHead->next->val) { // 下一个和这个相同，跳过
                pHead = pHead->next;
            }
            pHead = pHead->next;
        }
        p->next = NULL;
        return head->next;
    }

    ListNode* deleteDuplication(ListNode* pHead) {
        ListNode* head = new ListNode(INT_MAX); // 头节点
        ListNode* p = head;
        while (pHead != NULL) {
            if (p->val != pHead->val) {
                p->next = pHead;
                p = p->next;
            }
            pHead = pHead->next;
        }
        p->next = NULL;
        return head->next;
    }
};

int qmi(int a, int b, int p) {
    int res = 1 % p;
    while (b) {
        if (b & 1) res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
} 