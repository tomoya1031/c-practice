//
//  main.c
//  構造体ネストのポインタ
//
//  Created by 上田智也 on 2020/02/11.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

struct person{
    char *name;
    int age;
};

struct company{
    char *cname;
    struct person staff[2];
};



int main() {
    struct company yahoo;
    struct company *p_yahoo;
    
    p_yahoo=&yahoo;
    
    p_yahoo->cname="Yahoo";
    
    p_yahoo->cname="yahoo";
    p_yahoo->staff[0].name="Tanaka";
    p_yahoo->staff[0].age=33;
    p_yahoo->staff[1].name="Yamada";
    p_yahoo->staff[1].age=43;
    printf("%s\n",p_yahoo->staff[0].name);
    return 0;
}
