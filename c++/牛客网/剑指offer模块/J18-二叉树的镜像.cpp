#include <bits/stdc++.h>

using namespace std;


struct TreeNode {
 	int val;
 	struct TreeNode *left;
 	struct TreeNode *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
 
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pRoot TreeNode类 
     * @return TreeNode类
     */
    TreeNode* Mirror(TreeNode* root) {
        // 方法一：dfs  
//         if (root == NULL) {
//             return NULL;
//         }
//         TreeNode* left = Mirror(root->left);
//         TreeNode* right = Mirror(root->right);
        
//         root->left = right;
//         root->right = left; //从下到上
//         return root;
        
        // 方法二： bfs
        if (root == NULL) {
            return NULL;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            TreeNode* tmp = node->left;
            node->left = node->right;
            node->right = tmp;
            if (node->left != NULL) {
                q.push(node->left);
            }
            if (node->right != NULL) {
                q.push(node->right);
            }
        }
        return root;
    }
};

int main() {

    return 0;
}