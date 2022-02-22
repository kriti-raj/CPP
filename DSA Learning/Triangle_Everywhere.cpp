#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b && a != 0 && b != 0 && c != 0)
    {
        if (a == b && a == c)
        {
            cout << "1";
        }
        else if ((a == b && a != c) || (a == c && a != b))
        {
            cout << "2";
        }
        else if ((b == c && b != a) || (b == a && b != c))
        {
            cout << "2";
        }
        else if (a != b && a != c && b != c)
        {
            cout << "3";
        }
    }
    else
    {
        cout << "-1";
    }

    return 0;
}