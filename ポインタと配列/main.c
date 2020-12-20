//
//  main.c
//  ポインタと配列
//
//  Created by 上田智也 on 2020/01/17.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

int main() {
    char str[]="Hello World";
    char *p_str;
    
    p_str=str;
    
    printf("%s\n",p_str);
    printf("%p\n",p_str);
    printf("%p\n",str);
    return 0;
}
