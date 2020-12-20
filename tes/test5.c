#include<stdio.h>
#include<time.h>
#define N 40

int fib(int n){
    if(n==0)
       return 0;
    else if(n==1)
       return 1;
    else
       return fib(n-1)+fib(n-2);
    }
    
int main(){
    clock_t start,finish;
    start=clock();
    printf("%d\n",fib(N));
    finish=clock();
    printf("%f\n",(double)(finish-start)/CLOCKS_PER_SEC);
    return 0;
}