#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                {
                    count++;
                    // cout<<i<<" "<<j<<" "<<k<<"  :::: "<<"sum :"<<i+j+k<<", mul :"<<i*j*k<<", count :"<<count<<endl;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}