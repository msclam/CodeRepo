#include <bits/stdc++.h>

using namespace std;

int main() {
    double avg, x, res = 0;
    while (cin >> x) {
        res += x;
    }
    avg = res / 5;
    printf("%.2f", avg);
    return 0;
}