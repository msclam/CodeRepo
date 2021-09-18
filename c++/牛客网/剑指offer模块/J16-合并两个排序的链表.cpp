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
    ListNode* Merge(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(INT_MAX);
        ListNode* p = head;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                p->next = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }
        p->next = l1 != NULL ? l1 : l2;
        return head->next;
    }
};

int main() {

    return 0;
}