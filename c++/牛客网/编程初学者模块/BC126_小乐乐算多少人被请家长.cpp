#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i ++ ) {
        double avg = 0;
        for (int j = 0; j < 3; j ++ ) {
            cin >> x;
            avg += x;
        }
        avg /= 3.0;
        if (avg < 60) cnt++;
    }
    cout << cnt;
    return 0;
}