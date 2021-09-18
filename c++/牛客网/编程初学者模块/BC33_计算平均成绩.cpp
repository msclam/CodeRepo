#include <bits/stdc++.h>

using namespace std;

int main() {
    double res = 0;
    int num;
    int t = 5;
    while (t --) {
        cin >> num;
        res += num;
    }
    printf("%.1f", res / 5.0);
    return 0;
}