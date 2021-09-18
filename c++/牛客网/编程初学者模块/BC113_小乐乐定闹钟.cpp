#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, m;
    int k;
    while (~scanf("%d:%d %d", &h, &m, &k)) {
        h = (h + (m + k) / 60) % 24;
        m = (m + k) % 60;
        printf("%02d:%02d\n", h, m);
    }
    
    return 0;
}