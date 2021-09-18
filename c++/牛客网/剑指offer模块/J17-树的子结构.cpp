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

bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2)
{
    // 先判断根的值是否一样，再判断子树是否一样
    // 空树不是任意一个树的子结构
    bool res = false;
    if (pRoot1 != NULL && pRoot2 != NULL)
    {
        if (pRoot1->val == pRoot2->val)
        {
            res = check(pRoot1, pRoot2);
        }
        if (!res)
        {
            res = HasSubtree(pRoot1->left, pRoot2);
        }
        if (!res)
        {
            res = HasSubtree(pRoot1->right, pRoot2);
        }
    }
    return res;
}
bool check(TreeNode *left, TreeNode *right)
{
    if (right == NULL)
        return true; // B提前空
    if (left == NULL)
        return false; // B不空但A提前空
    if (left->val != right->val)
        return false;
    return check(left->left, right->left) && check(left->right, right->right);
}

int main()
{

    return 0;
}