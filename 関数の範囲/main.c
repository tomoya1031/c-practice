//
//  main.c
//  関数の範囲
//
//  Created by 上田智也 on 2020/01/28.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

int b=3000;

void change(){
    int a=100;
    b=1000;
    printf("%d\n",a);
    printf("%d\n",b);
}

int main() {
    
    int a=200;
    b=2000;
    printf("%d\n",b);
    change();
    
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}
