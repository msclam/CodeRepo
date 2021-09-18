#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param matrix char字符型vector<vector<>> 
     * @param word string字符串 
     * @return bool布尔型
     */
    vector<vector<bool>> st;
    int m, n;
    int X[4] = {0, 0, 1, -1};
    int Y[4] = {1, -1, 0, 0};
    bool dfs(vector<vector<char>> &A, string s, int x, int y, int idx) {
        if (idx == s.size()) return true;
        if (x < 0 || x >= m || y < 0 || y >= n) return false;
        if (st[x][y] == true || A[x][y] != s[idx]) return false;
        // if (idx == s.size() - 1) return true;
        st[x][y] = true;
        bool res = false;
        for (int i = 0; i < 4; i ++ ) {
            int nx = X[i] + x, ny = Y[i] + y;
            res = res || dfs(A, s, nx, ny, idx + 1);
        }
        st[x][y] = false;
        /*
        char tmp = A[x][y];
        A[x][y] = '.';
        for () {}
        A[x][y] = tmp;
        */
        return res;
    }
    bool hasPath(vector<vector<char> >& A, string s) {
        int m = A.size(), n = A[0].size();
        st.resize(m, vector<bool>(n, false));
        this->m = m, this->n = n;
        for (int i = 0; i < m; i ++ ) {
            for (int j = 0; j < n; j ++ ) {
                if (dfs(A, s, i, j, 0) == true) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {

    return 0;
}