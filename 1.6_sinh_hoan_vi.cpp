 #include<iostream>
 using namespace std;
 int n, x[20];
 
 int kiemtra(){
 	for(int i=1; i<=n; i++) 
 		if(x[i]<x[i+1]) return 0;
 	return 1;
 }
 
void sinh(){
	int i,j=n-1,temp;
	while(j>0&&x[j]>x[j+1]) j--;
	
	int k=n;
	while(x[j]>x[k]) k--;
	temp=x[j]; x[j]=x[k]; x[k]=temp;
	
	int r=n, s=j+1;
	while(r>s){
		temp=x[r]; x[r]=x[s]; x[s]=temp;
		r--; s++;
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
		for(int i=1; i<=n; i++) x[i]=i;
		while(!kiemtra()){
			in();
			sinh();
		}
		in();
		cout<<endl;
	}	
 }
