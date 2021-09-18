#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    int x, res;
    cin >> n >> m;
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < m; j ++ ) {
            cin >> x;
            if (x > 0) res += x;
        }
    }
    cout << res << endl;
    return 0;
}