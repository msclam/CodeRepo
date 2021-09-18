#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int minVal = INT_MAX, maxVal = INT_MIN;
    int x;
    for (int i = 0; i < n; i ++ ) {
        cin >> x;
        minVal = min(minVal, x);
        maxVal = max(maxVal, x);
    }
    
    cout << maxVal - minVal << endl;
    return 0;
}