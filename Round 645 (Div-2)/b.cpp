#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,curr;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        forn(i,0,n)
        	cin>>a[i];
        sort(a.begin(),a.end());
        curr=-1;
        forn(i,0,n)
        	if(a[i]<=i+1)
        		curr=i;
        cout<<curr+2<<'\n';
    }
    return 0;
}