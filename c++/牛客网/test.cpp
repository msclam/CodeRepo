#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;
    
    vector<int> rating(n, 0);
    vector<int> candy(n, 1);

    for (int i = 0; i < n; i ++ ) {
        cin >> rating[i];
    }

    for (int i = 0; i < n; i ++ ) {
        if (rating[i] > rating[(i - 1 + n) % n]) {
            candy[i] = candy[(i - 1 + n) % n] + 1;
        }
    }
    for (int i = 0; i < n; i ++ ) {
        cout << candy[i] << " ";
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i -- ) {
        if (rating[i] > rating[(i + 1) % n]) {
            candy[i] = max(candy[i], candy[(i + 1) % n] + 1);
        }
    }
    for (int i = 0; i < n; i ++ ) {
        cout << candy[i] << " ";
    }
    cout << endl;

    int res = 0;
    for (int i = 0; i < n; i ++ ) {
        res += candy[i];
    }

    cout << res;

    return 0;
}

