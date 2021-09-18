#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findLeft(vector<int> &A, int x) {
        int l = 0, r = A.size();
        while (l < r) {
            int mid = l + r >> 1;
            if (A[mid] >= x) r = mid;
            else l = mid + 1;
        }
        return l;
    }
    int findRight(vector<int> &A, int x) {
        int l = 0, r = A.size();
        while (l < r) {
            int mid = l + r >> 1;
            if (A[mid] > x) r = mid;
            else l = mid + 1;
        }
        return l;
    }
    int GetNumberOfK(vector<int> A ,int k) {
        int l = findLeft(A, k);
        int r = findRight(A, k);
        return r - l;
    }
};