#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum = 0 ;
    int loop  = 2;
    while( loop-- ){
        if( a>b ){
            sum += a;
            a--;
        }
        else{
            sum += b;
            b--;
        }
    }
    cout<<sum<<endl;
    return 0;
}