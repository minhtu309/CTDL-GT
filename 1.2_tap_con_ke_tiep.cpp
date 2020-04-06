#include<iostream>
using namespace std;

int main(){
	int i, k,n,t,x[1001];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for( i=1; i<=k; i++) cin>>x[i];
		for( i=k; i>0; i-- ){
			if( x[i]<n-k+i ){
				x[i]++;
				for(int j=i+1; j<=k; j++) x[j] = x[j-1]+1; 
				break;
			}
			if( x[i]=n-k+i ) x[i]=i;
		}
		for(i=1; i<=k; i++) cout<<x[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}
