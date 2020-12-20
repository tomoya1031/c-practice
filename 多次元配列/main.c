//
//  main.c
//  多次元配列
//
//  Created by 上田智也 on 2019/12/20.
//  Copyright © 2019 上田智也. All rights reserved.
//

#include <stdio.h>

int main() {
    int ary[2][3];
    ary[0][0]=1;
    ary[0][1]=2;
    ary[0][2]=3;
    ary[1][0]=4;
    ary[1][1]=5;
    ary[1][2]=6;
    printf("%d",ary[1][2]);
    return 0;
}
