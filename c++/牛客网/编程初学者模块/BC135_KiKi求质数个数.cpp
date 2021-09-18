#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i ++ ) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int f[1010];
    fill(f, f + 1010, 1);
    f[0] = f[1] = 0;
    for (int i = 2; i < 1010; i ++ ) {
        if (f[i]) {
            for (int j = i + i; j < 1010; j += i ) {
                f[j] = 0;
            }
        }
    }
    
    int cnt = 0;
    for (int i = 100; i <= 999; i ++ ) {
        if (isPrime(i)) cnt++;
//         if (f[i]) cnt ++;
    }
    cout << cnt << endl;
    return 0;
}