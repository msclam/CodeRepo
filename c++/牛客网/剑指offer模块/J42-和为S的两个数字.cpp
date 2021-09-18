#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> A,int sum) { // x + y = n   求x * y = (n - y) * y  在n / 2 到 n是递减，即首次匹配即最小乘积
        int l = 0, r = A.size() - 1;
        while (l < r) {
            int num = A[l] + A[r];
            if (num == sum) {
                return vector<int>{A[l], A[r]};
            } else if (num < sum) {
                l ++;
            } else {
                r --;
            }
        }
        return vector<int>{};
    }
};

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> A,int sum) {
        int n = A.size();
        int i = 0, j = n - 1;
        int mul = INT_MAX;
        pair<int, int> tmp;
        vector<int> res;
        while (i < j) {
            int ans = A[i] + A[j];
            if (ans == sum) {
                if (A[i] * A[j] < mul) {
                    mul = A[i] * A[j];
                    tmp = {A[i], A[j]};
                }
                i ++;
                j --;
            } else if (ans > sum) {
                j --;
            } else {
                i ++;
            }
        }
        if (n == 0 || (i == j && tmp.first == tmp.second)) return res;
        res.push_back(tmp.first);
        res.push_back(tmp.second);
        return res;
    }
};