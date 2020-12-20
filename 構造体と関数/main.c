//
//  main.c
//  構造体と関数
//
//  Created by 上田智也 on 2020/02/08.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>


struct parson{
    char *name;
    int age;
};

/*void disp(struct parson p){
    p.age=33;    意味なし
    printf("%s\n",p.name);
}*/

struct parson disp(struct parson p){
    p.age=33;
    return p;
}

int main() {
    struct parson Tanaka= {"Tanaka",24};
    struct parson Suzuki;
    
/*    disp(Tanaka);*/
    
    Suzuki=disp(Tanaka);
    printf("%d\n",Suzuki.age);
    
    printf("%d\n",Tanaka.age);

    return 0;
}
