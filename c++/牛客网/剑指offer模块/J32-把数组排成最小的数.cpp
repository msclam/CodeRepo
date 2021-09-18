#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    // 方法一：暴力全排列
//     string res;
//     int n;
//     void dfs(int u, vector<int> &A) {
//         if (u == n) {
//             string tmp = "";
//             for (int i = 0; i < A.size(); i ++ ) {
//                 tmp += to_string(A[i]);
//             }
//             res = min(res, tmp);
//             return;
//         }
//         for (int i = u; i < n; i ++ ) {
//             swap(A[u], A[i]);
//             dfs(u + 1, A);
//             swap(A[u], A[i]);
//         }
//     }
    // 方法二 暴力全排列
//     string res;
//     vector<int> tmp;
//     vector<bool> st;
//     int n;
//     void dfs(int u, vector<int> &A) {
//         if (u == n) {
//             string s = "";
//             for (int i = 0; i < n; i ++ ) {
//                 s += to_string(tmp[i]);
//             }
//             res = min(res, s);
//             return;
//         }
//         for (int i = 0; i < n; i ++ ) {
//             if (!st[i]) {
//                 st[i] = true;
//                 tmp.push_back(A[i]);
//                 dfs(u + 1, A);
//                 tmp.pop_back();
//                 st[i] = false;
//             }
//         }
//     }
    // 方法三： 自定义排序 1 23 456
    static bool cmp(string &a, string &b) {
        return a + b < b + a;
    }
    string PrintMinNumber(vector<int> A) {
//         n = A.size();
//         st.resize(n, false);
//         res.resize(n, '9'); // 字典序 "9" > "11"
//         dfs(0, A);
//         return res;
        vector<string> str;
        for (int i = 0; i < A.size(); i ++ ) {
            str.push_back(to_string(A[i]));
        }
        
        sort(str.begin(), str.end(), cmp);
        
        string ans = "";
        for (int i = 0; i < str.size(); i ++ ) {
            ans += str[i];
        }
        return ans;
    }
};