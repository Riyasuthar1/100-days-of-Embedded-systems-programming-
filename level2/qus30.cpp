#include<stdio.h>
int main(){
	int x,y,z;
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
  int min;
  if(x<y && x<z){  
       min=x;	
  }else if(y<z){
      min = y;
  }else{
  	min=z;
  }
  int i=1;
  int hcf=1;
  for(;i<= min;i++){
  if(x%i==0 && y%i==0 && z%i==0){
  	 hcf=i;
      	 }
    } 
    	printf("HCF is : %d",hcf);
}
