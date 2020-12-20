//
//  main.c
//  値渡し参照渡し
//
//  Created by 上田智也 on 2020/02/03.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

int add(int a,int b){
    return a+b;
}
void p_add(int *ans,int a,int b){
    *ans=a+b;
}


int main() {
    
    int a=20;
    int b=30;
    int ans;
    
    add(a,b);
    p_add(&ans,a,b);
    
/*    double d=30;
    scanf("%lf\n",&d);*/

    return 0;
}
