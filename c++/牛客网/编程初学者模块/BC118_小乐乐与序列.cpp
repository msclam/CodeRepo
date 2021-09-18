#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i ++ ) {
        cin >> x;
        st.insert(x);
    }
    for (auto val : st) {
        cout << val << " ";
    }
    return 0;
}