#include <bits/stdc++.h>

using namespace std;

int fun(int n) {
    int res = 1;
    for (int  i = 1; i <= n; i ++ ) {
        res *= i;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i ++ ) {
        res += fun(i);
    }
    cout << res << endl;
    return 0;
}