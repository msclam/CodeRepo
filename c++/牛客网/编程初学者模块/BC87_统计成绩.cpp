#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, minVal = INT_MAX, maxVal = INT_MIN;
    cin >> n;
    double x, res = 0;
    for (int i = 0; i < n; i ++ ) {
        cin >> x;
        minVal = min(minVal, x);
        maxVal = max(maxVal, x);
        res += x;
    }
    res /= n;
    printf("%.2f %.2f %.2f", maxVal, minVal, res);
    return 0;
}