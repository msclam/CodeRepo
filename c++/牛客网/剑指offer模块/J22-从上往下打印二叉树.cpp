#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* top = q.front();
            q.pop();
            res.push_back(top->val);
            if (top->left != NULL) q.push(top->left);
            if (top->right != NULL) q.push(top->right);
        }
        return res;
    }
};

int main() {

    return 0;
}