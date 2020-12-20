#include<stdio.h>
#include<math.h>

double rund(double d,int e){
    double f;

    f=pow(10,e);
    printf("%lf\n",f);
    

    return (int)(d*f+0.5)/f;
}


int main(){
    double a,b,c;
    printf("距離");
    scanf("%lf",&a);
    a=rund(a,2);

    printf("時間");
    scanf("%lf",&b);
    b=rund(b,2);

    printf("%lf  %lf\n",a,b);

    c=a/b;
    printf("%lf\n",c);

    return 0;
}