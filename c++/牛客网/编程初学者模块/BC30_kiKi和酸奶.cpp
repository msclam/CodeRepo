#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h, m;
    cin >> n >> h >> m;
    cout << n - ceil(m * 1.0 / h * 1.0) << endl;
    return 0;
}