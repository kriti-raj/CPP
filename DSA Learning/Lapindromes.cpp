#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string str;
        cin >> str;
        int n, count = 0;
        n = str.size();
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = n / 2; j < n; j++)
                {
                    if (str[i] == str[j])
                    {
                        for (int k = 0; k < n / 2; k++)
                        {
                            for (int l = k; l < n / 2; l++)
                            {
                                if (str[k] == str[l])
                                {
                                    continue;
                                }
                            }
                        }

                        count++;
                        break;
                    }
                }
            }

            if (count == n / 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else if (n % 2 != 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = n / 2 + 1; j < n; j++)
                {
                    if (str[i] == str[j])
                    {
                        for (int k = 0; k < n / 2; k++)
                        {
                            for (int l = k; l < n / 2; l++)
                            {
                                if (str[k] == str[l])
                                {
                                    continue;
                                }
                            }
                        }
                        count++;
                        break;
                    }
                }
            }

            if (count == n / 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
