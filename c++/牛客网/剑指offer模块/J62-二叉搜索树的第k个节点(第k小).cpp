#include <bits/stdc++.h>

using namespace std;

// 第k小： 从左到右 
// 第k大： 从右到左
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
    int idx = 0;
    TreeNode* KthNode(TreeNode* root, int k) {
        if (root == NULL) return NULL; // 左中右
        
        TreeNode* node = KthNode(root->left, k);
        if (node != NULL) return node;
        
        idx ++;
        if (idx == k) return root;
        
        node = KthNode(root->right, k);
        if (node != NULL) return node;
        
        return NULL;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int idx = 0;
    int kthLargest(TreeNode* root, int k) {
        TreeNode* node = dfs(root, k);
        if (node != NULL) return node->val;
        return -1;
    }
    TreeNode* dfs(TreeNode* root, int k) {
        if (root == NULL) return NULL;

        TreeNode* node = dfs(root->right, k);
        if (node != NULL) return node;

        idx ++;
        if (idx == k) return root;

        node = dfs(root->left, k);
        if (node != NULL) return node;

        return NULL;
    }
};

int main() {

    return 0;
}