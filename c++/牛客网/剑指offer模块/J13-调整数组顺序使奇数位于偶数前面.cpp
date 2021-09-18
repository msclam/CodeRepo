#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        // 快慢指针 （不保证顺序）
        // int slow = 0, fast = 0;
        // int n = nums.size();
        // while (fast < n) {
        //     if (nums[fast] % 2 == 1) {
        //         swap(nums[slow], nums[fast]);
        //         slow ++;
        //     }
        //     fast ++;
        // }
        // return nums;

        // 快速排序方法 （不保证顺序）
        // int n = nums.size();
        // int i = 0, j = n - 1;
        // while (i < j) {
        //     while (nums[i] % 2 != 0) i ++;
        //     while (nums[i] % 2 == 0) j --;
        //     if (i <= j) {
        //         swap(nums[i], nums[j]);
        //     }
        // }
        // return nums;

        // 暴力方法 （保证顺序）
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i ++ ) {
            if (nums[i] % 2 != 0) {
                res.push_back(nums[i]);
            }
        }
        for (int i = 0; i < n; i ++ ) {
            if (nums[i] % 2 == 0) {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};

int main() {

    return 0;
}