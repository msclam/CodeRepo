#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0) {
            cout << "Not quadratic equation" << endl;
        } else {
            if (b * b - 4 * a * c == 0) {
                printf("x1=x2=%.2f\n", -b / (2 * a));
            } else if (b * b - 4 * a * c > 0) {
                printf("x1=%.2f;x2=%.2f\n", (-b-sqrt(b*b-4*a*c))/(2*a), (-b+sqrt(b*b-4*a*c))/(2*a));
            } else if (b * b - 4 * a * c < 0) {
                if(b != 0) {
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",-b/(2*a),sqrt(-(b*b-4*a*c))/(2*a),-b/(2*a),sqrt(-(b*b-4*a*c))/(2*a));
                } else if (b == 0) {
                    printf("x1=0.00-%.2fi;x2=0.00+%.2fi\n",sqrt(-(b*b-4*a*c))/(2*a),sqrt(-(b*b-4*a*c))/(2*a));
                }
            }
        }
    }
    return 0;
}