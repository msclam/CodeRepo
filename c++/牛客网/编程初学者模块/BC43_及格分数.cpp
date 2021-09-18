#include <bits/stdc++.h>

using namespace std;

int main() {
    int score;
    while (cin >> score) {
        if (score >= 60) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }
    return 0;
}