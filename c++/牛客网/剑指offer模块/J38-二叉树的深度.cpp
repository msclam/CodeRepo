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
    int TreeDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return max(TreeDepth(root->left), TreeDepth(root->right)) + 1;
    }
};