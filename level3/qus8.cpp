//Get a number from user and check whether the digits are in ascending order
#include<stdio.h>
int checking_ascending_order(int a);
int main(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	if(checking_ascending_order(a)==1){
		printf("number are in ascending order");
	}else{
		printf("number are not in ascending order");
	}
	
}
int checking_ascending_order(int a){
	int result;
	if(a%10>(a%100)/10){
		result=1;
	}
	return result;
}
