#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    stack<int> st;
    while (cin >> x) {
        st.push(x);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}