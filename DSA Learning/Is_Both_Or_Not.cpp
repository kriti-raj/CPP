#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t % 5 == 0 && t % 11 != 0)
    {
        cout << "ONE" << endl;
    }
    if (t % 5 != 0 && t % 11 == 0)
    {
        cout << "ONE" << endl;
    }
    else if (t % 5 == 0 && t % 11 == 0)
    {
        cout << "BOTH" << endl;
    }

    else if (t % 5 != 0 && t % 11 != 0)
    {
        cout << "NONE" << endl;
    }

    return 0;
}