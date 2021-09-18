#include <bits/stdc++.h>

using namespace std;

int cmp(int a, int b) {
    return a > b;
}

void qsort(int a[], int l, int r) {
    if (l >= r) return;
    
    int i = l, j = r, x = a[l + r >> 1];
    while (i < j) {
        while (a[i] > x) i++;
        while (a[j] < x) j--;
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
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n;  i ++ ) cin >> a[i];
    
//     sort(a, a + n, cmp);
    qsort(a, 0, n - 1);
    
    for (int i = 0; i < 5; i ++ ) {
        cout << a[i] << " ";
    }
    
    return 0;
}


void qsort(vector<int> &a, int l, int r) {
    if (l >= r) return;

    int i = l, j = r, x = a[l + r >> 1];
    while (i < j) {
        while (a[i] < x) i ++;
        while (a[j] > x) j --;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j) qsort(a, l, j);
    if (i < r) qsort(a, i, r);
}