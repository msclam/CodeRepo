#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<bool>> st;
    int m, n, k;
    int X[4] = {0, 0, 1, -1};
    int Y[4] = {1, -1, 0, 0};
    bool check(int x, int y) {
        if (x < 0 | x >= m || y < 0 || y >= n) return false;
        if (st[x][y] == true || sum(x) + sum(y) > k) return false;
        return true;
    }
    int sum(int n) {
        int res = 0;
        while (n) {
            res += n % 10;
            n /= 10;
        }
        return res;
    }
    void dfs(int x, int y, int &res) {
        if (check(x, y) == false) {
            return;
        }
        res ++;
        st[x][y] = true;
        for (int i = 0; i < 4; i ++ ) {
            int nx = X[i] + x;
            int ny = Y[i] + y;
            dfs(nx, ny, res);
        }
    }
    void bfs(int x, int y, int &res) {
        queue<pair<int, int>> q;
        q.push(make_pair(0, 0));
        st[0][0] = true;
        res = 1;
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (int i = 0; i < 4; i ++ ) {
                int nx = X[i] + x;
                int ny = Y[i] + y;
                if (check(nx, ny)) {
                    q.push(make_pair(nx, ny));
                    st[nx][ny] = true;
                    res ++;
                }
            }
        }
    }
    int movingCount(int threshold, int rows, int cols) {
        int res = 0;
        st.resize(rows, vector<bool>(cols, false));
        this->m = rows, this->n = cols, this->k = threshold;
//         dfs(0, 0, res);
        bfs(0, 0, res);
        return res;
    }
};

int main() {

    return 0;
}