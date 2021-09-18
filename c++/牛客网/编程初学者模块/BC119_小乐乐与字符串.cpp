#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long c = 0, h = 0, n = 0;
    for (int i = 0; i < s.size(); i ++ ) {
        if (s[i] == 'C') c++;
        else if (s[i] == 'H') h += c;
        else if (s[i] == 'N') n += h;
    }
    cout << n;
    return 0;
}