#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int t,i,n;
	string s;
	cin >> t;
	while(t--){
		cin>>s;
		n=s.length();
		for(i=n-1; i>=0; i--){
			if(s[i]=='0'){
				s[i]='1';
				for(int j=i+1; j<n; j++) s[j]='0';
				break;
			}
			if(s[i]=='1') s[i]='0';
		}
			
		cout<<s<<endl;
	}
	
	return 0;
} 
