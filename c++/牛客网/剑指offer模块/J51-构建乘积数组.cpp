#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        // int n = A.size();
        // vector<int> B(n, 1);  // L[i] * R[i] = B[i] 
        // for (int i = 1; i < n; i ++ ) {
        //     B[i] = B[i - 1] * A[i - 1];
        // }
        // int t = 1;
        // for (int i = n - 2; i >= 0; i -- ) {
        //     t *= A[i + 1];
        //     B[i] *= t;
        // }
        // return B;
        int n = A.size();
        vector<int> L(n, 1);
        vector<int> R(n, 1);
        vector<int> B(n, 1);
        for (int i = 1; i < n; i ++ ) {
            L[i] = L[i - 1] * A[i - 1];
        }
        for (int i = n - 2; i >= 0; i -- ) {
            R[i] = R[i + 1] * A[i + 1];
        }
        for (int i = 0; i < n; i ++ ) {
            B[i] = L[i] * R[i];
        }
        return B;
    }
};