#include <bits/stdc++.h>

using namespace std;

int main() {
    int posi = 0, nega = 0;
    int x;
    for (int i = 0; i < 10; i ++ ) {
        cin >> x;
        if (x > 0) posi ++;
        else if (x < 0) nega++;
    }
    cout << "positive:" << posi << endl;
    cout << "negative:" << nega << endl;
    return 0;
}