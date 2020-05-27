#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t,a,b;
    cin>>t;

    while(t--){
        cin>>n>>m;
        a=max(n,m);
        b=min(n,m);
        cout<<a*b/2+(a*b)%2<<'\n';
    }
    return 0;
} 