#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> A) {
        // 你可以假设数组是非空的，并且给定的数组总是存在多数元素
//         int n = A.size();
//         unordered_map<int, int> mp;
//         for (int i = 0; i < n; i ++ ) {
//             ++ mp[A[i]]; // 记录个数
//         }
//         for (int i = 0; i < n; i ++ ) {
//             if (mp[A[i]] > n / 2) {
//                 return A[i];
//             }
//         }
//         return 0;
        int n = A.size();
        int cnt = 0;
        int res = A[0];
        for (int i = 0; i < n; i ++ ) {
            if (cnt == 0) {
                res = A[i];
                cnt = 1;
            } else {
                if (A[i] == res) cnt ++;
                else cnt --;
            }
        }
//         cnt = 0;
//         for (auto num : A) {
//             if (num == res) {
//                 cnt ++;
//             }
//         }
//         if (cnt > n / 2) return res;
//         else return 0;
        return res;
    }
};

int main() {

    return 0;
}