#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    while (n) {
        s += to_string(n % 6);
        n /= 6;
    }
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}