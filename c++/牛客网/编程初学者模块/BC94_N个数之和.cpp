#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, res = 0;
    for (int i = 0; i < n; i ++ ) {
        cin >> x;
        res += x;
    }
    cout << res << endl;
    return 0;
}