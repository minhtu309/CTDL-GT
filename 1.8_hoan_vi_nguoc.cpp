#include<iostream>
using namespace std;

int n, x[20];

int khoitao(){
		int dem=1;
	for(int i=n; i>0; i--){
		x[i]=dem;
		dem++;
	}
}

int kiemtra(){
 	for(int i=1; i<n; i++) 
 		if(x[i]>x[i+1]) return 0;
 	return 1;
 }

int sinh(){
	int j=n-1,k,s,r,temp;
	while(j>0 && x[j]<x[j+1]) j--;
	
	k=n;
	while(x[j]<x[k]) k--;
	temp=x[j]; x[j]=x[k]; x[k]=temp;
	
	r=j+1; s=n;
	while(r<s){
		temp=x[r]; x[r]=x[s]; x[s]=temp;
		r++; s--;
	}
	
}

int in(){
	for(int i=1; i<=n; i++) cout<<x[i];
	cout<<" ";
}

int main(){
	int t;
	cin>>t;
	while(t--){	
		cin>>n;
		khoitao();
		while(!kiemtra()){
			in();
			sinh();
		}
		in();
		cout<<endl;
	}
}
