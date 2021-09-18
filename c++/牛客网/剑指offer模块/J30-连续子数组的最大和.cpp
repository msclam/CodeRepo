#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> A) {
        int n = A.size();
        if (n == 0) {
            return 0;
        }
        int res = INT_MIN;
        vector<int> f(n, 0);
//         for (int i = 0; i < n; i ++ ) {
//             f[i] = A[i];
//             if (i > 0 && f[i - 1] + A[i] > f[i]) {
//                 f[i] = f[i - 1] + A[i];
//             }
//             res = max(res, f[i]);
//         }
        for (int i = 0; i < n; i ++ ) {
            f[i] = A[i];
            if (i > 0) {
                f[i] = max(A[i], f[i - 1] + A[i]);
            }   
            res = max(res, f[i]);
        }
        return res;
    }
};

int main() {

    return 0;
}