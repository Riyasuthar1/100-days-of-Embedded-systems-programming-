#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int n=0;
    int count=0;
    for(int count=1;count>=1;count++){
      if(x/10==0){
        printf("%d",count);
        break;
        }else{
          n=x/10;
          x=n;
        }
    }
	return 0;
}
