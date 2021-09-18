#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    int x;
    cin >> x;
    int i;
    for (i = 0; i < n; i ++ ) {
        if (x <= a[i]) {
            for (int j = n - 1; j >= i; j -- ) {
                a[j + 1] = a[j];
            }
            a[i] = x;
            break;
        }
    }
    if (i == n) {
        a[n] = x; 
    }
    for (int i = 0; i < n + 1; i ++ ) cout << a[i] << " ";
    return 0;
}