#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    
    for (int i = 2; i < n; i ++ ) {
        if (a[0] < a[1]) {
            if (a[i - 1] > a[i]) {
                cout << "unsorted";
                break;
            } else if (i == n - 1) {
                cout << "sorted";
            }
        } else {
            if (a[i - 1] < a[i]) {
                cout << "unsorted";
                break;
            } else if (i == n - 1) {
                cout << "sorted";
            }
        }
    }
    return 0;
}