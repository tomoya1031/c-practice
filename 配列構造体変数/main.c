//
//  main.c
//  配列構造体変数
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
    struct parson managers[2];
    
    managers[0].name="Tanaka";
    managers[0].age=23;
    managers[1].name="Yamada";
    managers[1].age=44;
    
    printf("%s\n",managers[1].name);
    return 0;
}
