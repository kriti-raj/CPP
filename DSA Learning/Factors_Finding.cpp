#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, count = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    cout << count << endl;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}