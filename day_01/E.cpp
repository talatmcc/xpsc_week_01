#include<bits/stdc++.h>
using namespace std;
int main(){
    float x;
    cin>>x;

    int f = floor(x);
    int c = ceil(x);
    float result = abs (f - x);
    if( result >= 0.5 ){
        cout<<c<<endl;
    }
    else{
        cout<<f<<endl;
    }
    return 0;
}