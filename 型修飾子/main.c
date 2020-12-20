//
//  main.c
//  型修飾子
//
//  Created by 上田智也 on 2020/02/17.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a;
    long int b;
    short int c;
    
    double d;
    long double e;
    
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(e));
    scanf("%d\n",&a);
    a=a+1;
    printf("%d\n",a);
    return 0;
}
