#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            cin >> arr[i][j];
        }
    }
    cin >> n >> m;
    cout << arr[n - 1][m - 1];
    return 0;
}