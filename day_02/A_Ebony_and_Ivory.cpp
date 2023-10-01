#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    for (int i = 0; (i * a) <= c; i++)
    {
        for (int j = 0; (i * a) + (j * b) <= c; j++)
        {
            if ((i * a) + (j * b) == c)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}