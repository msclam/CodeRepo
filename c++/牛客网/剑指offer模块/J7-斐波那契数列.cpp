#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        vector<int> f(n + 1, 0);
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= n; i ++ ) {
            f[i] = f[i - 1] + f[i - 2];
        } 
        return f[n];
    }
};

int main() {
    
    return 0;
}