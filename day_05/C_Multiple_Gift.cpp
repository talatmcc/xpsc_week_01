#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,y;
    cin>>x>>y;
    long count = 1;
    long long z = x;
    while( z <= y ){
        
        z = z*2;
        if(z>=x && z<=y){
            count++;
            // cout<<z<<" ";
        }
    }
    cout<<count;
    return 0;
}