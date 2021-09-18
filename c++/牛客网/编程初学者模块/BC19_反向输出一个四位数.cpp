#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int res = 0;
    cin >> n;
    while (n != 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    printf("%04d", res);
    return 0;
}