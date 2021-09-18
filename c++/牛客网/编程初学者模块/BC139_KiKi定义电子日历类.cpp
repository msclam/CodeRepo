#include <bits/stdc++.h>

using namespace std;

class MyDate {
private:
    int m;
    int d;
    int y;
public:
    MyDate():y(0), m(0), d(0){}
    void setDate(int y, int m, int d) {
        this->y = y;
        this->m = m;
        this->d = d;
    }
    void getDate() {
        cout << this->d << "/";
        cout << this->m << "/";
        cout << this->y << endl;
    }
};

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    MyDate date;
    date.setDate(y, m, d);
    date.getDate();
    return 0;
}