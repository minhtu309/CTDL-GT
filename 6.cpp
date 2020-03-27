#include<stdio.h>
#include<math.h>
main(){
	int n,t,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		k=sqrt(n);
		printf(n==k*k?"YES":"NO");
		printf("\n");
		
		
	}
}
