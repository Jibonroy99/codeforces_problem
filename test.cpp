#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    vector <int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

   long long  int Q;
    cin>>Q;
    while(Q--){
       long long int l,r,s;
        cin>>l>>r;
        s=v[l]*v[r];
        cout<<s<<endl;
    }

    
    return 0;
}