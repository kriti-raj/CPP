// Fibonacci Series

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1, t;
    cin >> t;
    for (int i = 0; i <= t; i++)
    {
        b = a + b;
        a = b - a;
        cout << a;
    }

    return 0;
}