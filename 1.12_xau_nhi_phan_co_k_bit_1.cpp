#include<iostream>
using namespace std;

int n,k,stop,x[20];

void sinh(){
	int i=n;
	while(i>0 && x[i]==1){
		x[i]=0;
		i--;
	}
	if(i>0) x[i]=1;
	else stop=1;
}

void in(){
	for(int i=1; i<=n; i++) cout<<x[i];
	cout<<endl;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		stop=0;
		while(!stop){
			int  dem = 0;
			for(int i=1; i<=n; i++) 
			if(x[i]==1) dem++;
			if(dem==k)	in();
			sinh();
		}
	}
}
