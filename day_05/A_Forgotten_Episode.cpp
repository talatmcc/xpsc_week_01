#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if( v[i+1]  != v[i] + 1){
            cout<<v[i]+1<<endl;
            break;
        }
    }
    return 0;
}