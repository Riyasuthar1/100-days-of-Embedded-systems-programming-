#include<stdio.h>
int main(){
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    int count=0;
    for(;x>0;x/=10){
    	int digit=x%10;
    	if(digit==3||digit==2||digit==5||digit==7){
    		count++;
		}
}     printf("the value of count: %d",count);
}
