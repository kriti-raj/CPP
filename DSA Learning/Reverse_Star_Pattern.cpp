#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = a; i >= 1; i--)
    {
        int j;
        for (j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (j; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}