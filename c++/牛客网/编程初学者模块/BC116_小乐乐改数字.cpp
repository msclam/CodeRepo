#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    for (int i = 0; i < s.size(); i ++ ) {
        if ((s[i] - '0') % 2 != 0) {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
    }
    cout << stoi(s);
//     string s;
//     int n;
//     cin >> n;
//     int x;
//     while (n) {
//         if ((n % 10) % 2 != 0) {
//             x = 1;
//         } else {
//             x = 0;
//         }
//         s += to_string(x);
//         n /= 10;
//     }
//     reverse(s.begin(), s.end());
//     cout << stoi(s);
    return 0;
}