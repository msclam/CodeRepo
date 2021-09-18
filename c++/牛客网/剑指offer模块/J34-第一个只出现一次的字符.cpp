#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        unordered_map<int, int> mp;
        for (char c : str) {
             ++ mp[c];
        }
        for (int i = 0; i < str.size(); i ++ ) {
            if (mp[str[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};