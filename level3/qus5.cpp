//Get a number from user and count the number of zeros in that number and print. Write your code inside the function. Do not Change the format.
#include<stdio.h>
int countnumberofzeroes(int x);
int main(){
	int x,result;
	printf("Enter the number:");
	scanf("%d",&x);
	result = countnumberofzeroes(x);
	printf("value of count : %d",result);
	
	
	}
int countnumberofzeroes(int x){
	int count=0;
	int p;
    for(;x>0;x/=10){ 
    	p=x%10;
    	if(p==0){
    		count++;
		}
    	}
    return count;
	
}
