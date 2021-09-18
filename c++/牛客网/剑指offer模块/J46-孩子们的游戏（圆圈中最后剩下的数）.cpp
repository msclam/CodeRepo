#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lastRemaining(int n, int m) {
        // 0 1 2 3 4 5 6   3    
        // queue<int> q;
        // for (int i = 0; i < n; i ++ ) {
        //     q.push(i);
        // }

        // while (q.size() > 1) {
        //     for (int i = 0; i < m - 1; i ++ ) {
        //         q.push(q.front());
        //         q.pop();
        //     }
        //     q.pop();
        // }
        // return q.front();

        vector<int> f(n + 1, 0);
        f[0] = f[1] = 0;
        for (int i = 2; i <= n; i ++ ) {
            f[i] = (f[i - 1] + m) % i;
        }
        return f[n];
    }
};