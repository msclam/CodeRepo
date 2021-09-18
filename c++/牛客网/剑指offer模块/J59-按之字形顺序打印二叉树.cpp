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
        if (root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while (!q.empty()) { 
            int n = q.size();
            vector<int> ans;
            for (int i = 0; i < n; i ++ ) {
                TreeNode* top = q.front();
                q.pop();
                ans.push_back(top->val);
                if (top->left != NULL) q.push(top->left);
                if (top->right != NULL) q.push(top->right);
            }
            level ++;
            if ((level & 1) == 0) reverse(ans.begin(), ans.end()); 
            res.push_back(ans);
        }
        return res;
    }
    
};