#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minNumberInRotateArray(vector<int> A)
    {
        int n = A.size();
        if (n == 0)
            return 0;

        int l = 0, r = A.size() - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (A[mid] > A[r])
                l = mid + 1;
            else if (A[mid] < A[r])
                r = mid;
            else
            {
                r--;
            }
        }
        return A[l];
    }
};

int main()
{

    string str = "a b c";
    stringstream ss(str);
    string s;
    while (ss >> s)
    {
        cout << s  << endl;
    }

    return 0;
}