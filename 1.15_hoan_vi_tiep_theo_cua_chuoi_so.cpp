#include<iostream>
#include<string>
using namespace std;

string s;
int n;

int sinh(){
	int j=n-1,r,m,k;
	char temp;
	while(j>=0 && s[j]>=s[j+1]) j--;
	
	k=n;
	while(s[j]>=s[k]) k--;
		temp=s[j]; s[j]=s[k]; s[k]=temp;
	
	r=j+1; m=n;
	while(r<m){
		temp=s[r]; s[r]=s[m]; s[m]=temp;
		r++; m--;
	}
}

int kiemtra(){
	for(int i=0; i<n; i++)
		if(s[i]<s[i+1]) return 0;
	return 1;
}

int main(){
	int t,thutu;
	cin>>t;
	while(t--){
		cin>>thutu;
		cin>>s;
		n=s.length()-1;
		if(kiemtra()) cout<<thutu<<" "<<"BIGGEST";
		else {
			sinh();
			cout<<thutu<<" "<<s;
		}
		cout<<endl;			
	}
	
}
