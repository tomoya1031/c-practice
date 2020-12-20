//
//  main.c
//  構造体
//
//  Created by 上田智也 on 2020/02/07.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

    struct parson{
        char *name;
        int age;
    };
    
int main() {

    struct parson Tanaka;
    
    Tanaka.name="Tanaka";
    Tanaka.age=23;
    printf("%s\n",Tanaka.name);
    return 0;
}
