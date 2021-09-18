#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    double avg = 0;
    for (int i = 0; i < 3; i ++ ) {
        cin >> x;
        avg += x;
    }
    avg /= 3.0;
    if (avg < 60) {
        cout << "YES" << endl;
    } else if (avg >= 60) {
        cout << "NO" << endl;
    }
    return 0;
}