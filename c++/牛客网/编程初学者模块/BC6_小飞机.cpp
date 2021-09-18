#include <bits/stdc++.h>

using namespace std;
 
int main() {
    vector<string> str { "     **     " ,"************" ,"    *  *    " };
    for (int i = 0; i < 3; i ++ ) {
        for (int j = 0; j < 2; j ++ ) {
            cout << str[i] << endl;
        }    
    }
    return 0;
}