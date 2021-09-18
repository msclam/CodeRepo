#include <bits/stdc++.h>

using namespace std;


struct ListNode {
 	int val;
 	struct ListNode *next;
 	ListNode(int x) : val(x), next(nullptr) {}
};
 
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pHead ListNode类 
     * @param k int整型 
     * @return ListNode类
     */
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        ListNode* fast = pHead, *slow = pHead;
        while (fast != NULL && k > 0 ) {
            fast = fast->next;
            k--;
        }
        if (k > 0) return NULL;
        while (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
        
//         int n = 0;
//         ListNode* p = pHead;
//         while (p != NULL) {
//             n ++;
//             p = p->next;
//         }
//         if (k > n) {
//             return NULL;
//         }
//         stack<ListNode*> st;
//         while (pHead != NULL) {
//             st.push(pHead);
//             pHead = pHead->next;
//         }
//         n = 0;
//         while (!st.empty()) {
//             n ++;
//             if (n == k) {
//                 return st.top();
//             }
//             st.pop();
//         }
//         return NULL;
    }
};

int main() {

    return 0;
}