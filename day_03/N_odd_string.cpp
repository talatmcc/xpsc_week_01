#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.length();
    string oddStr;
    for( int i=0 ; i<n; i+=2) {
        oddStr.push_back(str[i]);
    }
    cout<<oddStr<<endl;
    return 0;
}