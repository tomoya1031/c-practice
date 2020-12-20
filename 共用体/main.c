//
//  main.c
//  共用体
//
//  Created by 上田智也 on 2020/02/13.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

union person{
    char name[16];
    int age;
};

struct aperson{
    char *name;
    int age;
};




int main() {
    union person Tanaka={"Tanaka"};
    struct aperson Yamada={"Yamada"};

    printf("%s\n",Tanaka.name);
    printf("%ldバイト\n",sizeof(Tanaka));
    printf("%s\n",Yamada.name);
    printf("%ldバイト\n",sizeof(Yamada));
    
    Tanaka.age=23;
    printf("%s\n",Tanaka.name);
    printf("%d\n",Tanaka.age);
    printf("%ldバイト\n",sizeof(Tanaka));
    
    Yamada.age=28;
    printf("%s\n",Yamada.name);
    printf("%d\n",Yamada.age);
    printf("%ldバイト\n",sizeof(Yamada));
    
    
    return 0;
}
