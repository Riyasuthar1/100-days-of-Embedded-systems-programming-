//Write a loop program to print the sum of two-digit odd numbers, whose ten's digit is 7.
#include<stdio.h>
int main(){
	int sum;

	for(int i=10;i<=99;i++){
		if(i%2!=0){
			
		if(i/10==7){
			sum=sum+i;
		}
	}
	}
	printf("%d",sum);
	return 0;
}
