//
//  main.c
//  ビットフィールド
//
//  Created by 上田智也 on 2020/02/13.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

struct bt{
    unsigned char a:1;
    unsigned char b:1;
    unsigned char c:1;
    unsigned char d:1;
    unsigned char e:1;
    unsigned char f:1;
    unsigned char g:1;
    unsigned char h:1;
};

union u{
    unsigned char ch;
    struct bt ba;
};

int main() {
    union u uc;
    
    printf("%dバイト\n",sizeof(uc));
    
    uc.ch=257;
    printf("%d%d%d%d%d%d%d%d\n",uc.ba.h,uc.ba.g,uc.ba.f,uc.ba.e,uc.ba.d,uc.ba.c,uc.ba.b,uc.ba.a);
    return 0;
}
