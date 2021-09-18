#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < 2 * n + 1; i ++ ) {
            for (int j = 0; j <= n; j ++ ) {
                if (j == 0 || j <= n - i || (i >= n && j <= i - n)) cout << "* ";
                else cout << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}