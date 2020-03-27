#include<stdio.h>
int thnghich(int n){
	int i,t=0,k;
	k=n;
	while(n>0){
		i=n%10;
		t=t*10+i;
		n/=10;
	}
	if(t==k)  return 1;
	return 0;	
}
int chia10(int n){
	int s=0,i;
	while(n>0){
		i=n%10;
		s+=i;
		n/=10;
	}
	if(s%10==0) return 1; 
	return 0;
}
main(){
	int t,test;
	scanf("%d",&test);
	while(test--){
		int dem=0,k=1;
		scanf("%d",&t); 
		for(int i=1;i<=t;i++) k=k*10;
		for(int i=k/10;i<k;i++) 
			if(thnghich(i)==1&&chia10(i)==1) 	dem++ ;
			printf("%d\n",dem);
}
}
