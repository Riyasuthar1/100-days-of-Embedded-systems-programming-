#include<stdio.h>
int main(){
	int x,prime=1,n,sum=0,digit;
	scanf("%d",&x);
	n=x;
	for(int i=2;i<x-1;i++){
	if(x%i==0){
	prime=0;
	break;
	}
	for(;n;n/=10){
				digit=n%10;
				sum+=digit;
			}
	}
	if(prime==1){
	printf("prime:%d",sum);	
	}else{
	printf("not prime:%d",sum);
	}
	}

	
	
