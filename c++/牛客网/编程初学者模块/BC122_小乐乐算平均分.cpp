#include <bits/stdc++.h>

using namespace std;

int main() {
    double res = 0, avg = 0, x;
    for (int i = 0; i < 3; i ++ ) {
        cin >> x;
        res += x;
    }
    avg = res / 3.0;
    printf("%.2f %.2f", res, avg);
    return 0;
}