#include <bits/stdc++.h>

using namespace std;

int main() {
    long num;
    float cLanguage, math, english;
    scanf("%ld;%f,%f,%f", &num, &cLanguage, &math, &english);
    printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.", num, cLanguage, math, english);
    return 0;
}