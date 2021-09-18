#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param array int整型vector 
     * @return int整型vector
     */
    vector<int> FindNumsAppearOnce(vector<int>& A) {
//         int res = 0;
//         for (int num : A) {
//             res ^= num;
//         }
//         return res;
        
        // a ^ a = 0  ^ 相当于提取出不同的数据（晒去相同元素）
        // & 1 相当于取出最后一位进行判断(用作区分)
        int res = 0;
        for (int num : A) {  // 所有数异或相当于最后两个不同的是的二进制位置的不同
            res ^= num;
        }
        int flag = 1; // 找到两个数据最低位置不同的数  1111 ^ 0101 = 1010 ==> 0010就可以分辨这两个数
        while ((flag & res) == 0) {
            flag <<= 1;
        }
        int a = 0, b = 0;
        for (int i : A) {
            if ((i & flag)  == 0) a ^= i;
            else  b ^= i;
        }
        if (a > b) {
            swap(a, b);
        }
        return vector<int>{a, b};
    }
};