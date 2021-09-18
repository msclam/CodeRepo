#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            cin >> A[i][j];
        }
    }
    int x;
    double cnt = 0;
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            cin >> x;
            if (x == A[i][j]) {
                cnt++;
            }
        }
    }
    cout << fixed << setprecision(2) << (cnt  / (n * m) ) * 100 << endl; 
    return 0;
}