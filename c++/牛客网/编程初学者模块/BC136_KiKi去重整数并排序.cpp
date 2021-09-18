#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
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