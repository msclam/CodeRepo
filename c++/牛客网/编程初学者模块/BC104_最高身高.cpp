#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int idxi = 0, idxj = 0;
    int x;
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            cin >> x;
            if (x > maxVal) {
                maxVal = x;
                idxi = i + 1;
                idxj = j + 1;
            }
        }
    }
    cout << idxi << " " << idxj;
    return 0;
}