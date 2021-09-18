#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    char op;
    while (cin >> a >> b) {
        if (a == b) {
            op = '=';
        } else if (a > b) {
            op = '>';
        } else {
            op = '<';
        }
        cout << a << op << b << endl;
    }
    return 0;
}