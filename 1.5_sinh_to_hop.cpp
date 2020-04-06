#include<iostream>
using namespace std;

int n,k,x[20];

int kiemtra(){
	for(int i=k; i>0; i--)	
		if(x[i]!=n-k+i) return 0;
	return 1;
	
}

void sinh(){
	for(int i=k; i>0; i--){
		if(x[i]<n-k+i){
			x[i]++;
			for(int j=i+1; j<=k; j++) x[j] = x[j-1]+1;
			break;
		}
	
	}
}

void in(){
	for(int i=1; i<=k; i++) cout<<x[i];
	cout<<" ";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=k; i++) x[i]=i;
		while(!kiemtra()){
			in();
			sinh();
		}
		in();
		cout<<endl;
	}
	return 0;
}
