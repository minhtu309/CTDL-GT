#include<stdio.h>
main(){
	int a,b,t;
	scanf("%d %d",&a,&b);
	long long c=(long long)a*b;
	while(b>0){
		t=a%b; a=b; b=t;
	}
	printf("%d\n",a);
	printf("%lld",c/a);
}
