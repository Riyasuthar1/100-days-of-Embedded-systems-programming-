//Get a number from user, find the number of digits and print the same.
#include<stdio.h>
int count_number_of_digits(int a);
int main(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("The number of digits in the given number is:%d",count_number_of_digits(a));
	
}
int count_number_of_digits(int a){
	int count=0;
	for(;a>0;a/=10){
		int digit=a%10;
		count++;
	}
	return count;
}
