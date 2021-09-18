#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> res;
    vector<int> st;
    vector<string> Permutation(string str) {
        int n = str.size();
        st.resize(n, 0);
        string s;
        sort(str.begin(), str.end()); // 排序
        dfs(str, n, 0, s);
        return res;
    }
    void dfs(string str, int n, int u, string &s) {
        if (u == n) {
            res.push_back(s);
        }
        for (int i = 0; i < n; i ++ ) {
            if (!st[i] && !(i > 0 && st[i - 1] && str[i - 1] == str[i])) {
                st[i] = true;
                s.push_back(str[i]);
                dfs(str, n, u + 1, s);
                s.pop_back();
                st[i] = false;
            }
        }
    } 
//     vector<string> res;
//     string s;
//     int n;
//     vector<int> st;
//     vector<string> Permutation(string str) {
//         n = str.size();
//         st.resize(n, 0);
//         dfs(0, str);
//         return res;
//     }
//     void dfs(int u, string str) {
//         if (u == n) {
//             res.push_back(s);
//             return;
//         }
//         for (int i = 0; i < n; i ++ ) {
//             if (!st[i] && !(i > 0 && st[i - 1] && str[i - 1] == str[i])) {
//                 st[i] = true;
//                 s.push_back(str[i]);
//                 dfs(u + 1, str);
//                 s.pop_back();
//                 st[i] = false;
//             }
//         }
//     }
};