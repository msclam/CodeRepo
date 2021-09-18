#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    vector<int> printListFromTailToHead(ListNode *head)
    {
        // 方法一: 容器类
        //         stack<int> st;
        //         while (head != NULL) {
        //             st.push(head->val);
        //             head = head->next;
        //         }
        //         vector<int> res;
        //         while (!st.empty()) {
        //             res.push_back(st.top());
        //             st.pop();
        //         }
        //         return res;

        // 方法二： 递归
        //         vector<int> res;
        //         if (!head) {
        //             return res;
        //         }
        //         res = printListFromTailToHead(head->next);
        //         res.push_back(head->val);
        //         return res;

        // 方法三： 反转链表
        ListNode *pre = NULL;
        ListNode *cur = head;
        while (cur != NULL)
        {
            ListNode *tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        vector<int> res;
        while (pre != NULL)
        {
            res.push_back(pre->val);
            pre = pre->next;
        }
        return res;
    }
};