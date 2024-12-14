#include<stdio.h>
int main(){
  int x,y;
  scanf("%d",&x);
  scanf("%d",&y);
  for(int i=1;;i++){

      if(i%x ==0 && i%y==0){
          printf("lcm is : %d",i);
          break;
      }
      
  }
}
