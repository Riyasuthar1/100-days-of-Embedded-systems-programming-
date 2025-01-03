//Get a number from user and Check whether the sum of digits is 14 and print the result. Write your code inside the function. Do not Change the format.
#include<stdio.h>
int checkforsum(int);
int main(){
	int a,b;
	scanf("%d",&a);
	printf("%d\n",checkforsum(a));
	b=checkforsum(a);
	if(b==14){
		printf("sum of digits is 14" );
	}else{
		printf("sum of digits is not 14");
	}
	
}
int checkforsum(int a){
	int c;
	int sum=0;
	for(;a>0;a/=10){
		c=a%10;
        sum=sum+c;
	}
	return sum;
}
