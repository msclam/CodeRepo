#include <bits/stdc++.h>

using namespace std;

int max3(int a, int b, int c) {
    return max(max(a, b), c);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double m = 0;
    m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c))* 1.0;
    printf("%.2f", m);
    return 0;
}