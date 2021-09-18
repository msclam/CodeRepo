#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  //Insert one char from stringstream
    unordered_map<char, int> mp;
    queue<char> q;
    void Insert(char ch) {
         if (mp.find(ch) == mp.end()) {
             q.push(ch); // 第一个
         }
         ++ mp[ch]; // 不重复
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce() {
        while (!q.empty()) {
            char c = q.front();
            if (mp[c] == 1) {
                return c; 
            } else {
                q.pop();
            }
        }
        return '#';
    }

};