#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    long long res = 0;
    for (int i = 1; i <= n; i ++ ) {
        res += i;
    }
    cout << res;
    return 0;
}