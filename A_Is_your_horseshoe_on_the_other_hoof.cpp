#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    set<int> col;
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
         col.insert(a);
    }
    
   int s=4;
   int r=s-col.size();
   cout<<r;

    return 0;
}