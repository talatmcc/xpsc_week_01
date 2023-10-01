#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;

    string str  = to_string (x);
    int len = str.length();
    int rem = 4 - len;

    string ans = "";
    for( int i =1 ; i<=rem; i++ ){
        ans += "0";
    }
    ans += str;
    cout<<ans<<endl;
    return 0;
}