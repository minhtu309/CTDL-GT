#include<stdio.h>
#include<math.h>
int nguyento(int n){
	int i,dem=1;
	if(n==0||n==1) return 0;
	else{
		for(i=2;i<=sqrt(n);i++) if(n%i==0) dem++;
	if(dem==1) return 1;
	return 0;
	}
	
}
int phantich(int n){
	int s=0,t;
	int k=n;
	while(n>0){
		t=n%10; if(nguyento(t)==0) return 0;
		s=s+t;
		n/=10;
	}
	if(nguyento(k)&&nguyento(s)) return 1;
}
main(){
	int t,n,m;
	scanf("%d",&t);
	while(t--){
	int	dem=0;
		scanf("%d%d",&n,&m);
		for(int i=n;i<=m;i++)
			if(phantich(i)) 	dem++;
		printf("%d\n",dem);
	}
}
