//Write a loop program to print the two-digit even numbers, who’s sum of digits are 6.
#include<stdio.h>
int main(){
	int sum;

	for(int i=10;i<=99;i++){
		if(i%2==0){
			
		if(i/10+i%10==6){
			printf("%d\n",i);
		}
	}
	}
	return 0;
}
