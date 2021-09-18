#include <bits/stdc++.h>

using namespace std;

bool isLeap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int main() {
    
    int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m;
    while (cin >> y >> m) {
        if (isLeap(y)) {
            a[2] = 29;
        } else {
            a[2] = 28;
        }
        cout << a[m] << endl;
    }
    
    return 0;
}