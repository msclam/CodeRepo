#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    double p, s;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2f area=%.2f", p * 2, s);
    
    return 0;
}