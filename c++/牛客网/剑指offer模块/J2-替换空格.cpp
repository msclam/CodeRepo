#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param s string字符串 
     * @return string字符串
     */
    string replaceSpace(string s) {
        int n = s.size();
        string str;
        for (int i = 0; i < n; i ++ ) {
            if (s[i] == ' ') {
                str += "%20";
            } else {
                str += s[i];
            }
        }
        return str;
    }
};