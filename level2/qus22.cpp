#include<stdio.h>
 int main(){
 	int x;
 	printf("enter the number:");
 	scanf("%d",&x);
 	int count=0;
 	for(;x>10;x/=10){
 		int digit=x%100;
 		if(digit%2!=0){
 			count++;
		 }
	 }
	 printf("value of count: %d",count);
	 
	 return 0;
 }
