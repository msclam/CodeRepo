#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int NumberOf1(int n)
    {
        // 方法一 右移动数本身（非负数可行，>> 是带符号的移位）
        int res = 0;
        while (n) {
            if (n & 1) res ++;
            n >>= 1;
        }
        return res;
    }

    int NumberOf1(int n) {
        // 方法二 左移动1，数本身不动
        int res = 0;
        unsigned int flag = 1;
        while (flag) {
            if (n & flag) res ++;
            flag <<= 1;
        }
        return res;
    }

    int NumberOf1(int n) {
        // 1100 -> 1000     相当于  1100 & 1011= 1000
        int res = 0;
        while (n) {
            res ++;
            n = (n - 1) & n;
        }
        return n;
    }
};

int main()
{

    return 0;
}