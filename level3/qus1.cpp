#include<stdio.h>
int isadd(int);
int main(){
	int a,c;
	scanf("%d",&a);
	c= isadd(a);
	printf("%d",c);
	return 0;
}
int isadd(int a){
	int sum;
	sum=a+2;
	//return sum;
}
