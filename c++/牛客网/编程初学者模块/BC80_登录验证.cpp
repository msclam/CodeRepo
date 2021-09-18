#include <bits/stdc++.h>

using namespace std;

int main() {
    string usr, pwd;
    while (cin >> usr >> pwd) {
        if (usr == "admin" && pwd == "admin") {
            cout << "Login Success!" << endl;
        } else {
            cout << "Login Fail!" << endl;
        }
    }
    return 0;
}