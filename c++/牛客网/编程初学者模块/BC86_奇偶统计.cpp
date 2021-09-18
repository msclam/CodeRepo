#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int odd = 0, even = 0;
    for (int i = 1; i <= N; i ++ ) {
        if (i % 2 == 0) even++;
        else odd++;
    }
    cout << odd << " " << even;
    return 0;
}