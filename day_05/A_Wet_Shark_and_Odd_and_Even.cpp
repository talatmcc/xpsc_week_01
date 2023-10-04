#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        for (int i : arr)
        {
            if (i % 2 == 1)
            {
                sum -= i;
                break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
