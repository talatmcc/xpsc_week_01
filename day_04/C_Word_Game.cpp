#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // string arr[3][n];
        // string s1, s2, s3;
        map <string , vector<int>> mp;
        for( int i=1 ; i<=3 ; i++ ){
            for( int j = 1 ; j<=n ; j++ ){
                string str;
                cin>>str;
                mp[str].push_back(i);
            }
        }
        vector <int> freq( 4, 0);

        // int s1=0; int s2=0;int s3=0;
        for( auto pair : mp ){
            vector <int> v = pair.second;
            // cout<<pair.first<<" : "<<pair.second[0]<<" "<<pair.second[1]<<endl;
            for( int rowNumber : v){
                // int index = row;
                if(v.size() == 1){
                    freq[rowNumber] = freq[rowNumber] + 3;
                }
                else if(v.size() == 2){
                    freq[rowNumber] = freq[rowNumber] + 1;
                }
            }
        }

        cout<<freq[1]<<" "<<freq[2]<<" "<<freq[3]<<endl;
        // for( int i=0 ; i<3 ; i++ ){
        //     for( int j = 0 ; j<n ; j++ ){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
    return 0;
}