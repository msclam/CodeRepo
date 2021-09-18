#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char c;
    double a, b;
    while (cin >> a >> c >> b)
    {
        if (c == '+')
        {
            double r = a + b;
            printf("%.4f+%.4f=%.4f\n", a, b, r);
        }
        else if (c == '-')
        {
            double r = a - b;
            printf("%.4f-%.4f=%.4f\n", a, b, r);
        }
        else if (c == '*')
        {
            double r = a * b;
            printf("%.4f*%.4f=%.4f\n", a, b, r);
        }
        else if (c == '/')
        {
            if (b == 0)
                cout << "Wrong!Division by zero!" << endl;
            else
            {
                double r = a / b;
                printf("%.4f/%.4f=%.4f\n", a, b, r);
            }
        }
        else
            cout << "Invalid operation!" << endl;
    }
    return 0;
}