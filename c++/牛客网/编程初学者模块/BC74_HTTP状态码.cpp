#include <bits/stdc++.h>

using namespace std;

int main() {
    int val;
    while (cin >> val) {
        if (val == 200) {
            cout << "OK" << endl;
        } else if (val == 202) {
            cout << "Accepted" << endl;
        } else if (val == 400) {
            cout << "Bad Request" << endl;
        } else if (val == 403) {
            cout << "Forbidden" << endl;
        } else if (val == 404) {
            cout << "Not Found" << endl;
        } else if (val == 500) {
            cout << "Internal Server Error" << endl;
        } else if (val == 502) {
            cout << "Bad Gateway" << endl;
        }
    }
    return 0;
}