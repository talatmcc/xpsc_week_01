#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector <bool> visited(26, false);
        int n;
        cin>>n;
        string str;
        cin>>str;
        int ans = 0;
        for( char c : str){
            int val = c - 'A';
            if( !visited[val] ){
                visited[val] = true;
                ans += 2 ;
            }
            else{
                ans += 1;
            }         
        }
        cout<<ans<<endl;
    }
    return 0;
}