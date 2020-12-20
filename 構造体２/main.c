//
//  main.c
//  構造体２
//
//  Created by 上田智也 on 2020/02/08.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

typedef struct{
    char *name;
    int age;
    }pason;

int main() {
    
    pason Tanaka;
    
    Tanaka.name="Tanaka";
    Tanaka.age=23;
        
    printf("%s\n",Tanaka.name);
    return 0;
}
