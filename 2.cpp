#include<stdio.h>
main(){
	int i, n;
	double s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++) s+=(double)1/i;
	printf("%.4lf",s);
}

// add a comment
