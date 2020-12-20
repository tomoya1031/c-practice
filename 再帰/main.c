//
//  main.c
//  再帰
//
//  Created by 上田智也 on 2020/02/02.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

void func(int a){
    if(a>0){
    printf("%d\n",a);
    func(--a);
 }
}

int main() {
    
    func(100);
    
    return 0;
}
