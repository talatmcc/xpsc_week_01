#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<bool> visited(26, false);
    for (char c : str)
    {
        int val = c - 'a';
        if (!visited[val])
        {
            visited[val] = true;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {

        if (!visited[i])
        {
            char ans = i + 'a';
            cout << ans << endl;
            break;
        }
        count++;
    }
    if (count == 26)
        cout << "None" << endl;
    return 0;
}