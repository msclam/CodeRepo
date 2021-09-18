#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int StrToInt(string str) {
        // 去除前导空格， 获取正负号
        int n = str.size();
        int i = 0;
        while (i < n && str[i] == ' ') i ++;
        
        if (i == n) return 0;

        int sign = 1;
        if (str[i] == '+') {
            i++;
        } else if (str[i] == '-') {
            i++;
            sign = -1;
        }
        
        int res = 0;
        for (; i < n; i ++ ) { // res = res * 10 + (str[i] - '0')
            int num = str[i] - '0';
            if (num < 0 || num > 9) return 0; // 非法字符
            if (res > (INT_MAX - num) / 10) {
                return sign == -1 ? INT_MIN : INT_MAX; // 越界处理
            }
            res = res * 10 + num;
        }
        return sign * res;
    }
};

int main() {

    return 0;
}