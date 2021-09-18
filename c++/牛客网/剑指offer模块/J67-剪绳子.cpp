#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int cutRope(int n) {
        if (n < 2) {
            return 0;
        }
        vector<int> f(n + 1, 0);
        f[0] = 0;
        f[1] = f[2] = 1;
        for (int i = 3; i <= n; i ++ ) {
            for (int j = 1; j < i; j ++ ) {
                f[i] = max(f[i], max(j * (i - j), j * f[i - j]));
            }
        }
        return f[n];
    }
};

int main() {

    return 0;
}