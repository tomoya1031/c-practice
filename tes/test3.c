#include<stdio.h>

int main(){

    int i;

    for(i=1;i<=50;i++){
        if((i%3==0 || i%10==3 || i/10==3 )&& i%5==0)
            printf("aho!");
        else if(i%3==0 || i%10==3 || i/10==3){
            printf("aho");
        }
        else if(i%5==0){
            printf("!");
        }
        else{
            printf("%d",i);
        }
        printf("\n");
        sleep(1);
    }

}