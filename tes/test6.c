#include<stdio.h>

int main(){
    char a;
    int b;
    double c;

    printf("%p\n",&a);
    printf("%p\n",&a+sizeof(a)-1);
    printf("%p\n",&b);
    printf("%p\n",&b+sizeof(b)-1);
    printf("%p\n",&c);
    printf("%p\n",&c+sizeof(c)-1);
}