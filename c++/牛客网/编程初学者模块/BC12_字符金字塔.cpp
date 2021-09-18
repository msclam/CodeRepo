#include <bits/stdc++.h>

using namespace std;

int main() {
    char a;
    scanf("%c", &a);
    for (int i = 0; i < 5; i ++ ) {
        for (int j = 1; j < 5 - i; j ++ ) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j ++ ) {
            printf("%c ", a);
        }
        printf("\n");
    }
    return 0;
}