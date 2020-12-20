//
//  main.c
//  構造体とポインタ
//
//  Created by 上田智也 on 2020/02/10.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

struct person{
    char *name;
    int age;
};

int main() {
    struct person Tanaka={"Tanaka",33};
    struct person *p_Tanaka;
    
    p_Tanaka=&Tanaka;
    
    (*p_Tanaka).name="Yamada";
    
    printf("%s\n",Tanaka.name);
    return 0;
}
