//
//  main.c
//  マクロの判定
//
//  Created by 上田智也 on 2020/02/16.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

#define BOSS "Saitou"
#define TAX 8

int main(int argc, const char * argv[]) {
    
#undef BOSS
    
#ifdef BOSS
    printf("%s\n",BOSS);
#else
    printf("BOSSは定義されていません\n");
#endif
    
    
    return 0;
}
