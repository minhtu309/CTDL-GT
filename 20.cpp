#include<stdio.h>
#include<math.h>
int nguyento(int n){
	int i,dem=1;
	if(n==0||n==1) return 0;
	else{
		for(i=2;i<=sqrt(n);i++) if(n%i==0) dem++;
		if(dem==1) return 1; return 0;
	}    
}
main(){
	int a[100],t,i,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		for(i=0;i<n;i++) if(nguyento(a[i]))	printf("%d ",a[i]);	 
		printf("\n");
	}		
}
