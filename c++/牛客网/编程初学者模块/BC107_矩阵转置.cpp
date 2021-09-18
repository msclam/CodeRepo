#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[20][20], B[20][20];
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            cin >> A[i][j];
            B[j][i] = A[i][j];
        }
    }
    
    for (int i = 0; i < m; i ++ ) {
        for (int j = 0; j < n; j ++ ) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}