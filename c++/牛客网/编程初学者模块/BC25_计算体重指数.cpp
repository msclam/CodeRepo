#include <bits/stdc++.h>

using namespace std;

int main() {
    double w, h;
    cin >> w >> h;
    h = h / 100;
    double bmi = w / pow(h, 2);
    printf("%.2f", bmi);
    return 0;
}