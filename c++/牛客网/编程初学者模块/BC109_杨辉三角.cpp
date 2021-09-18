#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> res(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < i + 1; j ++ ) {
            if (j == 0 || j == i) {
                res[i][j] = 1;
            } else {
                res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < i + 1; j ++ ) {
            printf("%5d", res[i][j]);
        }
        cout << endl;
    }
    return 0;
}