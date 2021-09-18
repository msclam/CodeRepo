#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param numbers int整型vector 
     * @return int整型
     */
    int duplicate(vector<int>& A) {
//         int n = A.size();
//         sort(A.begin(), A.end());
//         for (int i = 0; i < n - 1; i ++ ) {
//             if (A[i] == A[i + 1]) return A[i];
//         }
//         return -1;
        
        set<int> st;
        int n = A.size();
        for (int i = 0; i < n; i ++ ) {
            if (st.count(A[i])) {
                return A[i];
            } else {
                st.insert(A[i]);
            }
        }
        return -1;
    }
};