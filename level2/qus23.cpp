#include<stdio.h>
int main(){
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    int count=0;
    for(;x>0;x/=10){
        int digit=x%10;
        for(int i=1;i<9;i++){  
        if(digit==i*i){
            count++;
        }
        
    }
}     printf("the value of count: %d",count);
}
