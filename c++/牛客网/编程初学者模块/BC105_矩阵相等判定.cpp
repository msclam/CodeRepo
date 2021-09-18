#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m], B[n][m];
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            cin >> A[i][j];
        }
    }
    int flag = 1;
    int x;
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j++ ) {
            cin >> x;
            if (x != A[i][j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    if (flag == 1) cout << "YES" << endl;
    else if (flag == 0) cout << "NO" << endl;
    return 0;
}