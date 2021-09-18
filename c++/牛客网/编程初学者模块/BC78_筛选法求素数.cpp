#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i < n; i ++ ) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> f(n + 1, 1);
        f[0] = f[1] = 0;
        for (int i = 2; i <= n; i++)
        {
            if (f[i])
            {
                for (int j = i + i; j <= n; j += i)
                {
                    f[j] = 0;
                }
            }
        }
        int cnt = 0;
        for (int i = 2; i <= n; i++)
        {
            if (f[i])
            {
                cout << i << " ";
                cnt++;
            }
        }
        cout << endl
             << n - 1 - cnt << endl;
    }
    return 0;
}