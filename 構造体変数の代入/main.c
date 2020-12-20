//
//  main.c
//  構造体変数の代入
//
//  Created by 上田智也 on 2020/02/08.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

struct parson{
    char *name;
    int age;
};

int main() {
    struct parson Tanaka,Yamada;
    
    Tanaka.name="Tanaka";
    Tanaka.age=23;
    
    Yamada=Tanaka;
    
    printf("%s\n",Yamada.name);
    
    Yamada.name="Yamada";
    
    printf("%s\n",Yamada.name);
    
    return 0;
}
