#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int k = 5 * i - 4; k <= 5 * i; k++)
                cout << k << " ";
        }
        else
        {
            for (int k = 5 * i; k >= 5 * i - 4; k--)
                cout << k << " ";
        }
        cout << "\n";
    }
    return 0;
}