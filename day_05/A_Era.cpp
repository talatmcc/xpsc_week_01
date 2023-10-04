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
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int operation = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] <= count){
                count++;
            }
            else if(arr[i] > count){
                operation += (arr[i]- count - 1);
                count = arr[i];
            }
        }
        cout<<operation<<endl;
    }
    return 0;
}