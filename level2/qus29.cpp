#include<stdio.h>
int main(){
  int x,y,z;
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
  for(int i=2;;i++){

      if(i%x ==0 && i%y==0 && i%z==0){
          printf("lcm is : %d",i);
          break;
      }
     // printf("lcm is : %d",i);
      
  }
}
