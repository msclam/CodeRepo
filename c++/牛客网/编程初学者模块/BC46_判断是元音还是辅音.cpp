#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    while (cin >> c) {
        if (c == 'A' || c == 'a' || c == 'e' || c == 'E' || c == 'i' || c == 'I' ||
               c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    }
    return 0;
}