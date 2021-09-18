#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int f[n][n];
    int flag = 1;
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < n; j ++ ) {
            cin >> f[i][j];
            if (i > j && f[i][j] != 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    if (flag == 0) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}