#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, d, e, res;
    for (int i = 0; i < 5; i ++ ) {
        cin >> a >> b >> c >> d >> e;
        res = a + b + c + d + e;
        printf("%.1f %.1f %.1f %.1f %.1f %.1f\n", a, b, c, d, e, res);
    }
    return 0;
}