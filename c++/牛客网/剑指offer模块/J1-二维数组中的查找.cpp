#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool Find(int x, vector<vector<int> > A) {
        if (A.size() == 0 || A[0].size() == 0 ) {
            return false;
        }
        int m = A.size(), n = A[0].size();
        int i = 0, j = n - 1;
        while (i < m && j >= 0) {
            if (x == A[i][j]) return true;
            else if (x < A[i][j]) {
                j --;
            } else {
                i ++;
            }
        }
        return false;
    }
};

int main() {

    return 0;
}