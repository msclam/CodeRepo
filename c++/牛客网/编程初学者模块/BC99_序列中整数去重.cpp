#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> a;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i ++ ) {
        cin >> x;
        map[x]++;
        if (map[x] == 1) {
            a.push_back(x);
        }
    }
    
    for (auto i : a) {
        cout << i << " ";
    }
    
    
    return 0;
}