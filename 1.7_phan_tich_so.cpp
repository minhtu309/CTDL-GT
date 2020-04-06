
#include<iostream>
using namespace std;

int n,k,stop,x[20];

void sinh(){
	int i=k,j,r,s,d;
	while(i>0 && x[i]==1) i--;
	if(i>0){
		x[i]=x[i]-1;
		r=(k-i+1)/x[i]; s=(k-i+1)%x[i];
		k=i+r;
		if(r>0)
			for(j=i+1; j<=k; j++) x[j]=x[i];			
		if(s>0){
			k=k+1;
			x[k]=s;
		}
		
	}
	else stop = 1;
}

void in(){
	cout<<"(";
	if(k==1) cout<<x[1]<<") ";
	else {
		for(int i=1; i<k; i++) cout<<x[i]<<" ";
		cout<<x[k]<<") ";
	}	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		stop=0;
		k=1; x[1]=n;
		while(!stop){
			in();
			sinh();
		}
		cout<<endl;
	}
}
/* 1) Tim so dau tien tinh tu phai sang trai Xi # 1

2) Xi := Xi -1

3) Phan tich tong k - i +1  thanh tong cac so # Xi (k-i so 1 va gia tri 1 duoc bo ra tu Xi)

Viec phan tich k -i + 1 thanh tong cac so # Xi duoc thuc hien theo nguyen tac sau:

Se phan tich k-i+1 thanh (k-i+1) DIV Xi so bang Xi (cac so lien sau bang Xi)

va thanh cong them so (k-i+1) MOD Xi neu (k-i+1) MOD Xi # 0 
*/


/*void Next_Division(){
     int i = k, j, R, S,D;
     while (i > 0 && X[i]==1 ) i--;
     if (i>0 ) {
              X[i] = X[i] – 1;   D = k - i + 1;
              R = D / X[i];    S = D % X[i]; 
              k= i;
       if (R>0) {
             for ( j = i +1; j<=i + R; j++) 
                       X[j] = X[i];
             k = k + R;
        }
        if (S>0 ){ 
              k = k +1; X[k] = S; 
        }
     }
     else OK =0;
}

*/


