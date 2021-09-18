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
        vector<vector<int> > Print(TreeNode* root) {
            vector<vector<int>> res;
            if (root == nullptr) return res;
            queue<TreeNode*> q;
            q.push(root);
            while (!q.empty()) {
                // 按照层次
                vector<int> ans;
                int n = q.size();
                for (int i = 0; i < n; i ++ ) {
                    TreeNode* node = q.front();
                    q.pop();
                    ans.push_back(node->val);
                    if (node->left != NULL) {
                        q.push(node->left);
                    }
                    if (node->right != NULL) {
                        q.push(node->right);
                    }
                }
                res.push_back(ans);
            }
            return res;
        }
};

int main() {

    return 0;
}