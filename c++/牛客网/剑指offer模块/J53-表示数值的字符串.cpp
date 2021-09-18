#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string trim(string &s) {
        if (s.empty()) {
            return s;
        } 
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);
        return s;
    }
    bool isNumber(string s) {
        //+1.2e-3
        // e（不能有两个，不能出现1e 或者 e1）
        // .（不能有两个， 且不能在e后面）
        // + - 出现在非第一个位置，则前一个必定是e
        
        bool hasNum = false, hasDot = false, hasE = false;
        s = trim(s);
        int n = s.size();
        for (int i = 0; i < n; i ++ ) {
            // if (s[i] == ' ') continue;
            if (s[i] >= '0' && s[i] <= '9') {
                hasNum = true;
            } else if (s[i] == '+' || s[i] == '-') {
                if (i > 0 && !(s[i - 1] == 'e' || s[i - 1] == 'E')) {
                    return false;
                }
            } else if (s[i] == 'E' || s[i] == 'e') {
                if (hasE || !hasNum) return false;
                hasE = true;
                hasNum = false; // 避免出现 1e
            } else if (s[i] == '.') {
                if (hasE || hasDot) return false;
                hasDot = true;
            } else {
                return false;
            }
        }
        return hasNum;
    }
};

int main() {

    return 0;
}