#include <bits/stdc++.h>

using namespace std;

int main() {
    int A = 0, B = 0;
    char c;
    while (cin >> c) {
        if (c == '0') break;
        if (c == 'A') A++;
        else if (c == 'B') B++;
    }
    if (A == B) {
        cout << 'E';
    } else if (A > B) {
        cout << 'A';
    } else {
        cout << 'B';
    }
    return 0;
}