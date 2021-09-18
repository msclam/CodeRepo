#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i ++ ) cin >> arr[i];
    int x;
    cin >> x;
    arr[n] = x;
    sort(arr.begin(), arr.end());
    
    for (auto i : arr) cout << i << " ";
    return 0;
}