#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    if (x < 0) {
        y = 1;
    } else if (x == 0) {
        y = 0;
    } else {
        y = -1;
    }
    cout << y << endl;
    return 0;
}