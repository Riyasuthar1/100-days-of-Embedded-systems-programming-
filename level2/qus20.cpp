#include<stdio.h>
int main(){
	int count;
	for(int x=2;x<=9;x++){
		int prime=1;
		for(int i=2;i<x;i++){
			if(x%i==0){
			prime=0;
			break;
			}
	}      
			if(prime==1){
			printf("prime no is :%d\n",x);
			count++; 
			       
			}
		}
		printf("value of count: %d",count);
	}
		

