#include <bits/stdc++.h>

using namespace std;

int main() {
    int cnt = 0;
    for (int i = 1; i <= 2019; i ++ ) {
        if ((i == 9) || (i % 10 == 9) || ((i / 10) % 10 == 9) || ((i / 100) % 10 == 9))
            cnt++;
    }
    cout << cnt;
    return 0;
}