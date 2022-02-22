#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (b == arr[i])
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "-1";
    }
    else if (count > 0)
    {
        cout << "1";
    }

    return 0;
}