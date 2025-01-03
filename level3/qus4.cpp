#include<stdio.h>
int checkforprime(int x);
int x;
int main(){
	int a,p;
	scanf("%d",&x);
	p=checkforprime(x);
	printf("%d\n",p);
	if(p==1){
    	printf("no. is prime");
	}else{
		printf("no. is not prime");
	}
}
int checkforprime(int){
	int i=2;
	int prime=1;
	for(;i<x-1;i++){
		if(x%i==0){
			prime=0;
			break;
		}
}   return prime;
	}
	

