#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a > b && a < c) || (a < b && a > c))
    {
        cout << a;
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        cout << b;
    }
    else if ((c > a && c < b) || (c < a && c > b))
    {
        cout << c;
    }

    return 0;
}