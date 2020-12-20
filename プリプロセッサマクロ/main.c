//
//  main.c
//  プリプロセッサマクロ
//
//  Created by 上田智也 on 2020/02/16.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

#define BOSS "Saitou"
#define TAX 8

int main(int argc, const char * argv[]) {
    
    printf("%s\n",BOSS);
    
    
#undef BOSS
    printf("s\n",BOSS);
    
    return 0;
}
