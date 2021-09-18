#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> A;
    void Insert(int num) {
        A.push_back(num);
    }

    double GetMedian() { 
        sort(A.begin(), A.end());
        int n = A.size();
        if (n & 1 == 1) {
            return (double) A[n / 2];
        } else {
            return (double)((A[n / 2] + A[n / 2 - 1]) / 2.0);
        }
    }

};

class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int, vector<int>, less<int>> A;
    priority_queue<int, vector<int>, greater<int>> B;
    MedianFinder() {

    }
    
    void addNum(int num) {
        if (A.size() == B.size()) {
            B.push(num);
            A.push(B.top());
            B.pop();
        } else {
            A.push(num);
            B.push(A.top());
            A.pop();
        }
    }
    
    double findMedian() {
        return A.size() != B.size() ? A.top() : (A.top() + B.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */