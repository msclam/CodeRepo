#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string ReverseSentence(string str) {
        // 空串
        if (str.size() == 0) {
            return str;
        }
        // 全部是空格
        int n = str.size();
        int i = 0;
        while (i < n && str[i] == ' ') i ++;
        if (i == n) return str;
        
        stringstream ss(str);
        vector<string> res;
        string s;
        while (ss >> s) {
            res.push_back(s);
        }
        reverse(res.begin(), res.end());
        
        string tmp = "";
        for (int i = 0; i < res.size(); i ++ ) {
            tmp = tmp + res[i] + ' ';
        }
        tmp.pop_back();
        return tmp;
    } 
//     string ReverseSentence(string str) {
//         // 空串
//         if (str.size() == 0) {
//             return str;
//         }
//         // 非空串，但是全是空格
//         int i = 0, n = str.size();
//         while (i < n && str[i] == ' ') i ++;
//         if (i == n) {
//             return str;
//         }
//         string s = "";
//         string res = "";
//         bool isWord = false;
//         for (int i = n - 1; i >= 0; i -- ) {
//             if (str[i] != ' ') { // 先组建单词
//                 isWord = true;
//                 s = str[i] + s;
//             } else if (str[i] == ' ' && isWord == true) {
//                 res = res + s + " ";  // 组成res
//                 isWord = false;
//                 s = "";
//             }
//         }
//         if(s != "") {
//             res += s; // 如果是 _ab_cd 则可以正常统计，但是ad_cd这样最后一个单词就不能统计，所以要加
//         }  
//         return res;
//     }
};