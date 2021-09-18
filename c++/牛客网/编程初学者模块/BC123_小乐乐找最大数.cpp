#include <bits/stdc++.h>

using namespace std;

int main() {
    int maxVAl = INT_MIN;
    int x;
    for (int i = 0; i < 4; i ++ ) {
        cin >> x;
        maxVAl = max(maxVAl, x);
    }
    cout << maxVAl;
    return 0;
}