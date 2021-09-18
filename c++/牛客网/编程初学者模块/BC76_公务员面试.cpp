#include <bits/stdc++.h>

using namespace std;

void qsort(vector<int> &a, int l, int r) {
    if (l >= r) return;
    int i = l, j = r, x = a[l + r >> 1];
    while (i < j) {
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j) qsort(a, l, j);
    if (i < r) qsort(a, i, r);
}

int main() {
    vector<int> a(7, 0);
    for (int i = 0; i < 7; i ++ ) {
        cin >> a[i];
    }
    qsort(a, 0, 6);
    double avg = 0;
    for (int i = 1; i < 6; i ++ ) {
        avg += a[i];
    }
    avg /= 5.0;
    printf("%.2f", avg);
    return 0;
}