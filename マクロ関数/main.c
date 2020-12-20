//
//  main.c
//  マクロ関数
//
//  Created by 上田智也 on 2020/02/17.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

#define ADD(a,b)((a)+(b))

int main() {
    
    int a=ADD(200*4,200*2);
    
    printf("%d\n",a);
    return 0;
}
