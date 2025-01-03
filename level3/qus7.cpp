//Get two numbers from user and compare the numbers. If same print “Same” otherwise print “Not Same”. Write your code inside the function. 
#include<stdio.h>
int comparenumber(int a, int b);
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(comparenumber(a,b)==1){
		printf("same");
	}else{
		printf("not same");
	}
}
int comparenumber(int a, int b){
	int result;
	if(a==b){
		result=1;
	}
	return result;
}
