#include <bits/stdc++.h>

using namespace std;

int main() {
    int val;
    cin >> val;
    if (val >= 10) {
        cout << "Danger++";
    } else if (val >= 4 && val <= 9) {
        cout << "Danger";
    } else if (val >= 0 && val <= 3) {
        cout << "Good";
    }
    return 0;
}