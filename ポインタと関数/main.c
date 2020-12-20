//
//  main.c
//  ポインタと関数
//
//  Created by 上田智也 on 2020/01/22.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

int add(int c,int d){
    c+=100;
    return c+d;
}

int add2(int *a,int b){
    *a+=100;
    return *a+b;
}


int main() {
    int a=20;
    int b=30;
    
    int c=20;
    int d=30;
    
    printf("%d\n",add2(&a,b));
    printf("%d\n",a);               
    
    printf("%d\n",add(c,d));
    printf("%d\n",c);
    return 0;
}
