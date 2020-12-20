//
//  main.c
//  構造体のネスト
//
//  Created by 上田智也 on 2020/02/10.
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
    yahoo.cname="yahoo";
    yahoo.staff[0].name="Tanaka";
    yahoo.staff[0].age=33;
    yahoo.staff[1].name="Yamada";
    yahoo.staff[1].age=43;
    printf("%s\n",yahoo.staff[0].name);
    return 0;
}
