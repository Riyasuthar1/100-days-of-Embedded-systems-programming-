//Write a program to get number from user, print whether that number’s first two digits (ten’s digits and one’s digit) is prime.

#include<stdio.h>
int main(){
	int x,n,i,p,w,digit=0;
	int prime=1;
	scanf("%d",&x);
	p=x/10;
	n=p%10;
	w=n*10+x%10;
	printf("%d",w);
	for(int i=2;i<w-1;i++){
		if(w%i==0){
			prime=0;
			break;
		}
		
	}
	if(prime==1){
		printf("prime");
	}else{
		printf("not prime");
	}

		
	
	return 0;
}
