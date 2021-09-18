#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void reverse(string &s, int l, int r) {
        for (int i = 0; i < (r - l + 1) / 2; i ++ ) {
            swap(s[l + i], s[r - i]);
        }
    }
    string reverseLeftWords(string s, int t) {
        /*
        1 2 3 4 5 6   2
        3 4 5 6 1 2 
        5 6 1 2 3 4 
        */ 
        // 方法一
        int n = s.size();
        t %= n;
        string str;
        for (int i = t; i < t + n; i ++ ) {
            str.push_back(s[i % n]); // 左移
        }
        // for (int i = n - t; i < n - t + n; i ++ ) {
        //     str.push_back(s[i % n]); // 右移
        // }
        return str;

        // 方法二
        // int n = s.size();
        // t %= n;
        
        // reverse(s, 0, t - 1);
        // reverse(s, t, n - 1);
        // reverse(s, 0, n - 1);

        // return s;
    }
};