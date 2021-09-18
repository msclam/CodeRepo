#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left, *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
    bool IsBalanced_Solution(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        return IsBalanced_Solution(root->left) && IsBalanced_Solution(root->right) 
            && abs(depth(root->left) - depth(root->right)) <= 1;
    }
    int depth(TreeNode* root) {
        if (root == NULL) return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }
};

