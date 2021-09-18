#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int jumpFloor(int n) {
        if (n <= 1) {
            return 1;
        }
        vector<int> f(n + 1, 0);
        f[0] = f[1] = 1;
        for (int i = 2; i <= n; i ++ ) {
            f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
    }
//     int jumpFloor(int n) {
//         if (n <= 1) return 1;
//         return jumpFloor(n - 1) + jumpFloor(n - 2);
//     }
};