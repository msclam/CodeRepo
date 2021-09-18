#include<bits/stdc++.h>

using namespace std;
 
int main() {
    double a, b;
    double res = 0;
    while(cin >> a >> b) {
        b /= 100.0;
        res = a / (b * b);
        if(res < 18.5)
            cout << "Underweight" << endl;
        else if(res <= 23.9)
            cout << "Normal" << endl;
        else if(res <= 27.9)
            cout << "Overweight" << endl;
        else
            cout << "Obese" << endl;
    }
    return 0;
}