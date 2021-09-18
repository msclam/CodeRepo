#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getOne(int n) {
        int res = 0;
        while (n) {
            if (n % 10 == 1) res ++;
            n /= 10;
        }
        return res;
    }
    int NumberOf1Between1AndN_Solution(int n) {
        int res = 0;
        for (int i = 1; i <= n; i ++ ) {
            res += getOne(i);
        }
        return res;
    }
};

class Solution {
public:
    int countDigitOne(int n) {
        //1204 => 0010~1119   000-119   12 * 10
        //1214 => 0010~1214   000-124   12 * 10 + 4 + 1
        //1234 => 0010~1219   000-129   (12 + 1) * 10
        int cnt = 0; 
        long digit = 1;
        int high = n / 10, cur = n % 10, low = 0;
        while (high != 0 || cur != 0) {
            // 循环所有位，每一位三种情况(0、1、2~9) 求考虑当前位为1的小于等于n的1的个数
            if (cur == 0) {
                cnt += high * digit;
            } else if (cur == 1) {
                cnt += high * digit + low + 1;
            } else {
                cnt += (high + 1) * digit;
            }
            low += cur * digit;
            cur = high % 10;
            high /= 10;
            digit *= 10;
        }
        return cnt;
    }
}; 