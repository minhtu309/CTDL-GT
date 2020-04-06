 #include<iostream>
 using namespace std;
 
 int n,k,x[50],c[50];
 
 int kiemtra(){
 	for(int i=1; i<=k; i++)
 		if(c[i]!=n-k+i) return 0;
 	return 1;
 }
 
 int sinh(){
 	for(int i=1; i<=k; i++) c[i]=x[i];
 	for(int i=k; i>0; i--){
 		if(c[i]<n-k+i){
 			c[i]=c[i]+ 1;
			for(int j=i+1; j<=k; j++) c[j]=c[j-1]+1;	
			break;
		}
	}	
 }
 
 void sosanh(){
 	if(kiemtra()) cout<<k;
 	else {	
	 	int dem=0;
 		for(int i=1; i<=k; i++)
 		for(int j=1; j<=k; j++)
 			if(x[i]==c[j]) dem++;
 		dem=k-dem;
 		cout<<dem;
	 }
 }
 
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		cin>>n>>k;
 		for(int i=1; i<=k; i++) cin>>x[i];
 		sinh();
 		sosanh();
 		cout<<endl;
	 }
 }
