#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool IsContinuous( vector<int> A ) {
        sort(A.begin(), A.end());
        int joker = 0;
        for (int i = 0; i < A.size() - 1; i ++ ) {
            if (A[i] == 0) joker ++;
            else {
                if (A[i] == A[i + 1]) {
                    return false;
                } 
            }
        }
        return A[4] - A[joker] < 5;
    }
};