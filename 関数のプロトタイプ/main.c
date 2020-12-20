//
//  main.c
//  関数のプロトタイプ
//
//  Created by 上田智也 on 2020/01/23.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>
#include "my.h"         /*自作のヘッダーファイルから読み込む,*/


int main() {
    int a=add(30,50);
    printf("%d\n",a);
    return 0;
}

int add(int a,int b){
    return a+b;
}
