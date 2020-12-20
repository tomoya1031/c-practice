#include<stdio.h>

int main(){
    int x;

    do{
        printf("何点ですか？\n");
        scanf("%d",&x);
    }while (x<0||x>100);
   
    
    printf("%d点です。\n",x);

    return 0;
}