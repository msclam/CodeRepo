#include <bits/stdc++.h>

using namespace std;

bool isTriangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (isTriangle(a, b, c)) {
            if (a == b && a == c && b == c) {
                cout << "Equilateral triangle!" << endl;
            } else if (a == b || a == c || b == c) {
                cout << "Isosceles triangle!" << endl;
            } else {
                cout << "Ordinary triangle!" << endl;
            }
        } else {
            cout << "Not a triangle!" << endl;
        }
    }
    
    return 0;
}