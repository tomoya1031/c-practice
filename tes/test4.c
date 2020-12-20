#include<stdio.h>
#include<time.h>
#define N 40

int fib(int n){
    int F0=0;
    int F1=1;
    int Fn;
    int i;

    for(i=2;i<=n;i++){
        Fn=F0+F1;
        F0=F1;
        F1=Fn;
    }
    return Fn;
}
int main(){
    clock_t start,finish;
    start=clock();
    printf("%d\n",fib(N));
    finish=clock();
    printf("%f\n",(double)(finish-start)/CLOCKS_PER_SEC);
    return 0;
}