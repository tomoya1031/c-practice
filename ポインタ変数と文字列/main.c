//
//  main.c
//  ポインタ変数と文字列
//
//  Created by 上田智也 on 2020/01/19.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char *p_str="Hello World";
    
    p_str="Hi There";         /*普通のう文字列変数だと置き換えできない*/
    
    printf("%s\n",p_str);
    printf("%d\n",strlen(p_str));
    return 0;
}
