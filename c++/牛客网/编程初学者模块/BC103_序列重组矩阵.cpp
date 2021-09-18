#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[n * m];
    int B[n][m];
    
    for (int i = 0; i < n * m; i ++ ) cin >> A[i];
    
    int idx = 0;
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            B[i][j] = A[idx++];
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}