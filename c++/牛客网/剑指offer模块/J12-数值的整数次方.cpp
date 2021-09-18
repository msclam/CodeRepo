#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double Power(double base, int exponent) {
        // int sign = 1;
        // if (exponent < 0) {
        //     exponent = -exponent;
        //     sign = -1;
        // }
        // double res = 1.0;
        // for (int i = 1; i <= exponent; i ++ ) {
        //     res *= base;
        // }
        // return sign == 1 ? res : 1.0 / res;

        long b = exponent;
        if (b < 0) {
            b = -b;
            base = 1 / base;
        }
        double res = 1.0;
        while (b) {
            if (b & 1) res = res * base;
            base = base * base;
            b >>= 1;
        }
        return res;
    }
};

int main() {

    return 0;
}