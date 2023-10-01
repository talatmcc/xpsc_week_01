#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mult = 0;
    while (mult <= 1000)
    {
        mult += c;
        if (mult >= a && mult <= b)
        {
            cout << mult << endl;
            break;
        }
    }
    if(!(mult >= a && mult <= b))
    cout << "-1" << endl;

    return 0;
}