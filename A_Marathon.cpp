#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, co = 0;
        cin >> a >> b >> c >> d;
       
        if (a < b)
            co++;
        if (a < c)
            co++;
        if (a < d)
            co++;
        cout << co << endl;
    }

    return 0;
}