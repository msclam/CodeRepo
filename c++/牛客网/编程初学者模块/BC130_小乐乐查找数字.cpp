#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i ++ ) {
        cin >> x;
        map[x]++;
    }
    cin >> x;
    cout << map[x];
    return 0;
}