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
    bool check(TreeNode* left, TreeNode* right) {
        if (left == NULL && right == NULL) return true; // 00
        if (left == NULL || right == NULL) return false; // 10  01
        if (left->val != right->val) return false;
        return check(left->left, right->right) && check(left->right, right->left);
    }
    
    bool isSymmetrical(TreeNode* pRoot) {
        //方法一
//         if (pRoot == NULL) return true;
//         return check(pRoot->left, pRoot->right);
        
        // 方法二 bfs
        if (pRoot == NULL) return true;
        queue<TreeNode*> q;
        q.push(pRoot->left);
        q.push(pRoot->right);
        while (!q.empty()) {
            TreeNode* left = q.front(); q.pop();
            TreeNode* right = q.front(); q.pop();
            if (left == NULL && right == NULL) continue;
            if (left == NULL || right ==NULL) return false;
            if (left->val != right->val) return false;
            q.push(left->left);
            q.push(right->right);
            q.push(left->right);
            q.push(right->left);
        }
        return true;
        
        // 方法三 dfs
//         if (pRoot == NULL) return true;
//         stack<TreeNode*> st;
//         st.push(pRoot->left);
//         st.push(pRoot->right);
//         while (!st.empty()) {
//             TreeNode* left = st.top(); st.pop();
//             TreeNode* right = st.top(); st.pop();
//             if (left == NULL && right == NULL) continue;
//             if (left == NULL || right ==NULL) return false;
//             if (left->val != right->val) return false;
//             st.push(left->left);
//             st.push(right->right);
//             st.push(left->right);
//             st.push(right->left);
//         }
//         return true;
    }
};

int main() {

    return 0;
}