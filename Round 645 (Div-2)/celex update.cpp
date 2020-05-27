#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a , ll b){
   if(b==0) 
   	return a;
   return gcd(b,a%b);
}

ll ncr(int n, int r) 
{ 
    long long p = 1, k = 1;
    if (n - r < r) 
        r = n - r; 

    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r;
            long long m = gcd(p, k); 
            p /= m; 
            k /= m; 
            n--; 
            r--; 
        }
        return p;
    }

    else
        return 1;
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x1,x2,y1,y2,x,y,t;
    cin>>t;

    while(t--){
        cin>>x1>>y1>>x2>>y2;
        y=y2-y1, x=x2-x1;
        cout<<1+ncr(x+y,x)-ncr(x/2+y/2,y/2)<<'\n';
    }
    return 0;
} 