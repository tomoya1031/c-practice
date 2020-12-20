#include <stdio.h>

int main(){

    int a,b,c,d;
    double e;

//    printf("何歳\n");
//   scanf("%d",&a);

    printf("なんぼ？\n");
    scanf("%d",&b);

    printf("利率は？\n");
    scanf("%lf",&e);

    printf("どんだけ増やしたいん？\n");
    scanf("%d",&d);

    c=0;
    while(b<d){
        b=b*e+b;
        c++;
        printf("%d\n",b);
    }
    printf("%d\n",c);

/*    a=a+1;
    if(a>20){
     printf("%d\n",a);       
    }
    else if(a<20){
     printf("%d\n",a-10);
    }
    else{
     printf("%d\n",a+20);     
    }*/

    return 0;
}
