#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n + 1; i ++ ) {
            for (int j = n; j >= i; j -- ) cout << "  ";
            for (int j = 0; j < i; j ++ ) cout << "*";
            cout << endl;
        }
        
        for (int i = 1; i <= n; i ++ ) {
            for (int j = 0; j < i; j ++ ) cout << "  ";
            for (int j = i; j <= n; j ++ ) cout << "*";
            cout << endl;
        }
    }
    return 0;
}