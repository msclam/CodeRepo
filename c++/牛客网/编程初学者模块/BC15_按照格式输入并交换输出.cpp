#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, t;
    scanf("a=%d,b=%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("a=%d,b=%d", a, b);
    return 0;
}