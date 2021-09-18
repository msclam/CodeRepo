#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    int x;
    cin >> x;
    int idx = 0;
    for (int i = 0; i < n; i ++ ) {
        if (x != a[i]) {
            a[idx++] = a[i];
        }
    }
    
    for (int i = 0; i < idx; i ++ ) cout << a[i] << " ";
    return 0;
}