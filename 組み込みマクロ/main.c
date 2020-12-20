//
//  main.c
//  組み込みマクロ
//
//  Created by 上田智也 on 2020/02/17.
//  Copyright © 2020 上田智也. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%d行\n",__LINE__);
    printf("%s\n",__FILE__);
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    return 0;
}
