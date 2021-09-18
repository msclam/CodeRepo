#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    while (cin >> c) {
//         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (isalpha(c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}