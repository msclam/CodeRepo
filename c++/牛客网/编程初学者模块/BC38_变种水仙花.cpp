#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 10000; i <= 99999; i ++ ) {
        int res = (i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + 
            (i / 100) * (i % 100) + (i / 10) * (i % 10);
       if (i == res) {
           cout << res << " ";
       }
    }
    return 0;
}