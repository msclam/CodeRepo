#include <bits/stdc++.h>

using namespace std;

int main() {
//     int n, x;
//     cin >> n;
//     vector<int> a;
//     for (int i = 0; i < n; i ++ ) {
//         cin >> x;
//         a.push_back(x);
//     }
//     cin >> x;
//     a.push_back(x);
//     sort(a.begin(), a.end());
    
//     for (auto i : a) {
//         cout << i << " ";
//     }
    
    int n, x;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i ++ ) {
        cin >> arr[i];
    }
    
    cin >> x;
    int i;
    for (i = 0; i < n; i ++ ) {
        if (x <= arr[i]) {
            for (int j = n - 1; j >= i; j -- ) {
                arr[j + 1] = arr[j];
            }
            arr[i] = x;
            break;
        }
    }
    if (i == n) {
        arr[i] = x;
    }
    
    for (auto k : arr) {
        cout << k << " ";
    }
    
    return 0;
}