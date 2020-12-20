//
//  main.c
//  ポインタ変数
//
//  Created by 上田智也 on 2020/01/15.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a;
    int *p_a;
    int **pp_a;
    
    
    a=200;
    p_a=&a;
    pp_a=&p_a;
    
    *p_a=300;                   /*実データを置き換える、aが変更する*/
    
    printf("%p\n",p_a);         /*ポインタのメモリアドレスの場所*/
    printf("%d\n",*p_a);          /*実データ*/
    printf("%d\n",a);          /*実データ*/
    printf("%d\n",*(&a));          /*実データ*/
    printf("%p\n",pp_a);          /*ポインタのポインタのメモリアドレスの場所*/
    
    
    return 0;
}
