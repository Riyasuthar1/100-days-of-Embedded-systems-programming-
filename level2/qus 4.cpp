#include<stdio.h>
int main(){

int i,sum;
    sum=0;
    for(i=6;i>=1;i--){
      //printf("%d",sum); 
      sum=sum+i;
      //printf("%d\n",sum);     
    }
    printf("%d\n",sum); 
    return 0;
}
