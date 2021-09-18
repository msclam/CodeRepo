#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double sum, avg;
    sum = a + b + c;
    avg = sum / 3;
    printf("%.2f %.2f", sum, avg);
    
    return 0;
}