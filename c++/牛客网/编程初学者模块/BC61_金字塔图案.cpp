#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i ++ ) {
            for (int j = 0; j < n; j ++ ) {
                if (j < n - i - 1) cout << " ";
                else cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}