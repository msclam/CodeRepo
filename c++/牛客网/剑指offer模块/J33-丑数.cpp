#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
//     bool isUgly(int num) {
//         while (num % 2 == 0) {
//             num /= 2;
//         }
//         while (num % 3 == 0) {
//             num /= 3;
//         }
//         while (num % 5 == 0) {
//             num /= 5;
//         }
//         return num == 1;
//     }
//     int GetUglyNumber_Solution(int index) {
//         int i = 0;
//         int num = 0;
//         while (i < index) {
//             num++;
//             if (isUgly(num)) {
//                 i++;
//             }
//         }
//         return num;
//     }
    int GetUglyNumber_Solution(int index) {
        if (index <= 0) return 0;
        vector<int> num(index);
        int i = 0, j = 0, k = 0;
        num[0] = 1;
        for (int idx = 1; idx < index; idx ++ ) { // 三数组有序合并
            int tmp = min(2 * num[i], min(3 * num[j], 5 * num[k]));
            if (tmp == 2 * num[i]) i ++;
            if (tmp == 3 * num[j]) j ++;
            if (tmp == 5 * num[k]) k ++;
            num[idx] = tmp;
        }
        return num[index - 1];
    }
};