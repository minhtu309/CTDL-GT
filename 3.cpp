#include<stdio.h>
main(){
	int i,n;
	long long t=1,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t*=i;
		s+=t;
	}
	printf("%lld",s);
}
