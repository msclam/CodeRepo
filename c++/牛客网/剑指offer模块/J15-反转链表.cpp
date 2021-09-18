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
    ListNode* ReverseList(ListNode* root) {
        // 方法一：递归
//         if (root == NULL || root->next == NULL) {
//             return root;
//         }
//         // 1 -> 2 -> 3 -> 4 -> null     1 -> 2 <- 3 <- 4   
//         ListNode* head = ReverseList(root->next);
//         root->next->next = root;
//         root->next = NULL;
//         return head;
        
        // 方法二
        ListNode* pre = NULL;
        ListNode* cur = root;
        while (cur != NULL) {
            ListNode* tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        return pre;
    }
};

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b = vector<int>(a.begin() + 1, a.begin() + 4);
    for (auto i : b) {
        cout << i << " ";
    }
    return 0;
}