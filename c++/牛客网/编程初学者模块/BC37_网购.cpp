#include <bits/stdc++.h>

using namespace std;

int main() {
    double price;
    int m, d, ticket;
    double percent;
    bool flag = false;
    cin >> price >> m >> d >> ticket;
    if (m == 11 && d == 11) {
        percent = 0.7;
        flag = true;
    } else if (m == 12 && d == 12) {
        percent = 0.8;
        flag = true;
    } else {
        percent = 1;
    }
    price *= percent;
    if (flag == true && ticket == 1) {
        if (price > 50) {
            printf("%.2f", price - 50);
        } else {
            printf("%.2f", 0);
        }
    } else {
        printf("%.2f\n", price);
    }
    return 0;
}