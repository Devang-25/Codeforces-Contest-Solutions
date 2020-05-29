#include <iostream>
using namespace std;
 
int main() {
	
	int t,n,m,x,y;
	
	cin>>t;
	
	while(t--){
		
		cin>>n>>m>>x>>y;
		
		int cost = 0;
		char c[m];
		
		for(int i=0;i<n;i++){
			
			int dotCount = 0;
			
			for(int j=0;j<m;j++){
				
				cin>>c[j];
				
				if(c[j]=='.'){
 
					dotCount++;
					
				}
				if(c[j]=='*' || j==m-1) {
					
					cost+= (dotCount/2) * min(x*2,y);
					cost+= (dotCount%2) *x;
					dotCount = 0;
					
				}
					
				
			}
			
		}
		
		cout<<cost<<endl;
	}
	
	
	return 0;
}