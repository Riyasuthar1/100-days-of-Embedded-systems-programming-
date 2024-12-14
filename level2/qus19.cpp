#include<stdio.h>
int main(){
	int x,i,n,p,w;
	int prime=1;
	scanf("%d",&x);
	p=x/10;
	w=((p/10)%10)*10+p%10;
	for(int i=2;i<w-1;i++){
		if(w%i==0){
			prime=0;
			break;
		}
	}
	if(prime==1){
		printf("no is prime");
	}else{
		printf("not prime");
	}
	return 0;
}
