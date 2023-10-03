#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int k = 3;
    int count = 0;
    for (int i = 0; i < n - k + 1; i++)
    {
        // for(int j = i ;  j < i + k ; j++)
        // {
        if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C')
        {
            count++;
            // break;
            // cout<<j<<" :"<<count<<endl;
        }
        // }
    }
    cout << count << endl;
    return 0;
}