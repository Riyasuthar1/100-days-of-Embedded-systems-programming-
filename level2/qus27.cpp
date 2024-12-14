#include<stdio.h>
int main(){
  int i,p,x=0;
    int sum=0;
    int count=0;
    for(;count<10000;count++){
      p=count;
      for(;p>0;p/=10){
            i=p%10;
            sum+=i;
            }
            if(sum==14){
            x++;
            
            }
            sum=0;
            }
            
    printf("count is : %d",x);
    
}
