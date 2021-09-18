#include <bits/stdc++.h>

using namespace std;

class CQueue {
public:
    stack<int> st1, st2;
    CQueue() {
        while (!st1.empty()) {
            st1.pop();
        }
        while (!st2.empty()) {
            st2.pop();
        }
    }
    
    void appendTail(int value) {
        st1.push(value);
    }
    
    int deleteHead() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        if (st2.empty()) {
            return -1;
        } else {
            int num = st2.top();
            st2.pop();
            return num;
        }
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

int main() {

    return 0;
}