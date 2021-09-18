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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if (pHead1 == nullptr || pHead2 == nullptr) {
            return nullptr;
        }
        ListNode* p1 = pHead1, *p2 = pHead2;
        while (p1 != p2) {
            p1 = p1 != nullptr ? p1->next : pHead2;
            p2 = p2 != nullptr ? p2->next : pHead1;
        }
        return p1;
    }
};