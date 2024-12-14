#include<stdio.h>
int main(){
	int max=0;
	for(int i=1000;i<9999;i++){
		if(i%7 && i%9==0){
			if(i>max){
				max=i;
			}
		
		}

	}
	if(max!=0){
		printf("no which is divisible by 7 and 9 is : %d\n",max);
	}
	
	
	
	
	
	
}
