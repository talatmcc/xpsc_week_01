#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,t;
    cin>>a>>b>>t;
    float final = 0;
    float ans = (b*t) / a;
    // cout<<ans<<endl;
    for( int i = 1 ; (i*b) <= ans; i++ ){
        final = b*i;
        if(final > ans ){
            break;
        }
    }
    cout<<final<<endl;
    return 0;
}