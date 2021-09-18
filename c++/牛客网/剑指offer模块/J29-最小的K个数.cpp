#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> A, int k) {
        // 排序
//         vector<int> res;
//         if (k == 0 || k > A.size()) return res;
//         sort(A.begin(), A.end());
//         int cnt = 0;
//         for (int i : A) {
//             res.push_back(i);
//             cnt ++;
//             if (cnt == k) break;
//         }
//         return res;
        
        // 优先队列: 大顶堆
        vector<int> res;
        if (k == 0 || k > A.size()) return res;
        priority_queue<int, vector<int>, less<int>> q;
        for (int num : A) {
            if (q.size() < k) {
                q.push(num);
            } else {
                if (num < q.top()) {
                    q.pop();
                    q.push(num);
                }
            }
        }
        
        while (!q.empty()) {
            res.push_back(q.top());
            q.pop();
        }
        return res;
        
    }
};
