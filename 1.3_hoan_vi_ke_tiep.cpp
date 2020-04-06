#include<iostream>
using namespace std;



/* b1: 	tim vi tri cua j thoa man x[j]<x[j+1]
	b2: tim vi tri cua k thoa man x[j]<x[k] => doi cho 
	b3: lat nguoc doan tu j+1 ...n
*/

void sinh(int x[],int &n){
	int j,k,temp;

	j=n-1;
	while(j>0 && x[j]>x[j+1]) j--;

	k = n;
	while(x[j]>x[k]) k--;
	temp = x[j]; x[j]=x[k]; x[k] = temp;
	
	int r=j+1, s=n;
	while(r<s){
		temp = x[r]; x[r]=x[s]; x[s]=temp;
		r++; s--;
	}

	for(int i=1; i<=n; i++)		cout<<x[i]<<" ";
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		int x[1001];
		cin>>n;
		for(int i=1; i<=n; i++) cin>>x[i];
		sinh(x,n);
		cout<<endl;
	}
	
	return 0;
}
