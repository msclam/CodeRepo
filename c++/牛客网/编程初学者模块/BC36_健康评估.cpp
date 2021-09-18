#include <bits/stdc++.h>

using namespace std;

int main() {
    double res = 0;
    double w, h;
    cin >> w >> h;
    res = w / pow(h, 2);
    if (res >= 18.5 && res <= 23.9) {
        cout << "Normal" << endl;
    } else {
        cout << "Abnormal" << endl;
    }
    return 0;
}