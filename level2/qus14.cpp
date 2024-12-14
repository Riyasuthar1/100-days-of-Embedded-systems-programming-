#include <stdio.h>
int main(){
	int number,lastdigit,reversenum=0;
    scanf("%d",&number);
    for(; number>0;number/=10){
    	//int number=number/10; 
        int lastdigit = number % 10;  
        reversenum = reversenum*10 + lastdigit; 
        //number=number/10;
       
		   }
    printf("The reversed number is: %d\n", reversenum);  
	return 0;
}
