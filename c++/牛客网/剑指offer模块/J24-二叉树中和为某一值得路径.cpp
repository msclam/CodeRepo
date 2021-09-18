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
    vector<vector<int>> res;
    vector<int> path;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        check(root, expectNumber);
        return res;
    }
    void check(TreeNode* root, int num) {
        if (root == NULL) return;
        
        path.push_back(root->val);
        
        if (num == root->val && root->left == NULL && root->right == NULL) { // 是叶子同时等于输入值
            res.push_back(path);
        } 
        if (root->left != NULL) {
            check(root->left, num - root->val);
        }
        if (root->right != NULL) {
            check(root->right, num - root->val);
        }
        
        path.pop_back();
    }
};

int main() {

    return 0;
}