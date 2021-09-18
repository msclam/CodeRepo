#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> A) {
        // 先构建中序的二叉树，然后输出后续:  1 3 2 5 7 6 4
        // 4为根, 找出第一个比根大的数5，即为右子树，之后全比根大，否则就不是后续遍历
        int n = A.size();
        if (n == 0) return false;
        return check(A, 0, n - 1);
    }
    
    bool check(vector<int> &A, int l, int r) {
        if (l >= r) return true;
        int root = A[r];
        int i = l;
        while (A[i] < root) i ++;
        for (int j = i; j < r; j ++ ) {
            if (A[j] < root) {
                return false;
            }
        }
        return check(A, l, i - 1) && check(A, i, r - 1); // 左子树 && 右子树递归
    }
};

int main() {

    string s = "abcdef";
    cout << s.substr(1, 3);
    return 0;
}