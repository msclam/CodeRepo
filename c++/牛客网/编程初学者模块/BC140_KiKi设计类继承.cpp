#include <bits/stdc++.h>

using namespace std;

class Shape {
private:
    int x;
    int y;
public:
    Shape():x(0), y(0){}
    Shape(int a, int b): x(a), y(b){}
    virtual double getArea() {return 0.0;}
};

class Rectangle : public Shape {
private:
    int w;
    int h;
public:
    Rectangle():w(0), h(0){}
    Rectangle(int x, int y):w(x), h(y){}
    virtual double getArea() {
        return w * h;
    }
};

class Square : public Rectangle {
private:
    int a;
public:
    Square(): a(0) {}
    Square(int x):a(x){}
    virtual double getArea() {
        return a * a;
    }
};

class Circle : public Shape {
private:
    double r;
public:
    Circle() : r(0) { }
    Circle(int r) : r(r) { }
    virtual double getArea() { return r * r * 3.14; }
};

int main() {
    int a, b, d, e;
    cin >> a >> b >> d >> e;
    Rectangle r(a, b);
    Circle c(d);
    Square s(e);
    cout << r.getArea() << endl;
    cout << c.getArea() << endl;
    cout << s.getArea() << endl;
    return 0;
}