//Get a two-digit number from user swap the digits.
#include<stdio.h>
int swap_digit(int a);
int main(){
	int a;
	printf("Enter the 2 digit number : ");
	scanf("%d",&a);
	printf("Swaped digits are : %d",swap_digit(a));
	
}
int swap_digit(int a){
	int i=a/10;
	int p=a%10;
	int swap=p*10+i;
	return swap;
	
}
