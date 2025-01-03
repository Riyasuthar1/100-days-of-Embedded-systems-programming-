//Get a number from user and reverse that number and print. Write your code inside the function. Do not Change the format.
#include<stdio.h>
int reverseno(int a);
int main(){
	int a;
	scanf("%d",&a);
	printf("The reverseno is : %d",reverseno(a));
	
}
int reverseno(int a){
	int i,reverseno,sum=0;
	for(;a>0;a/=10){
		int digit=a%10;
		reverseno=reverseno*10+digit;
	}
	return reverseno;
}
