#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        x = i % 2;
        if (x != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}