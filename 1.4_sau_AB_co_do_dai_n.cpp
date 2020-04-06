#include<iostream>
using namespace std;

int n, stop, x[20]={0};

void in(){
	for(int i=1; i<=n; i++){
		if(x[i]==0) cout<<"A";
		else cout<<"B";
	}
	cout<<" ";
}

void sinh(){
	int i =n;
	while(i>0 && x[i]==1){
		x[i] = 0;
		i--;
	}
	if(i==0) stop=1;
	else x[i]=1;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n; 
		stop = 0;
		while(!stop){
			in();
			sinh();
		}
		cout<<endl;
	}
	return 0;
}
