#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int flag = 1;
    for (int i = 0; i < n; i ++ ) {
        for (int j = 0; j < n; j ++ ) {
            cin >> x;
            if (i > j && x != 0) {
                flag = 0;
                break;
            }
        }
        if (!flag) {
            break;
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}