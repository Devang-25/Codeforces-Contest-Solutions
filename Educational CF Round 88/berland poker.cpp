#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
using namespace std;
ll t,o;
 
int main()
{
    fast
    ll sum=0;
    ll dev=5;
	for(cin>>t;o<t;o++)
	{
		ll n,m,k;
		cin>>n>>m>>k;
		
		sum++;
		
		ll a=n/k;
		if(a>=m)
		cout<<m<<endl;
		else
		{
			m=m-a;
			ll e=m/(k-1);
			ll f=m%(k-1);
			if(f==0)
			{
				cout<<a-e<<endl;
			}
			else
			cout<<a-e-1<<endl;
		}
		sum+=dev;
	}
return 0;
}