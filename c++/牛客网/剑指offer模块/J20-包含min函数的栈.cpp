#include <bits/stdc++.h>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> dataStack, minStack;
    MinStack() {
        while (!dataStack.empty()) {
            dataStack.pop();
        }
        while (!minStack.empty()) {
            minStack.pop();
        }
    }
    
    void push(int x) {
        dataStack.push(x);
        if (minStack.empty() || x < minStack.top()) { // 辅助栈为空或者x < 辅助栈栈顶
            minStack.push(x);
        } else {
            minStack.push(minStack.top());
        }
    }
    
    void pop() {
        if (!minStack.empty() && !dataStack.empty()) {
            minStack.pop();
            dataStack.pop();
        }
    }
    
    int top() {
        if (!dataStack.empty()) {
            return dataStack.top();
        }
        return INT_MAX;
    }
    
    int min() {
        if (!dataStack.empty() && !minStack.empty()) {
            return minStack.top();
        }
        return INT_MAX;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */

int main() {

    return 0;
}