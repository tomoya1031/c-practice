//
//  main.c
//  test001
//
//  Created by 上田智也 on 2019/12/10.
//  Copyright © 2019 上田智也. All rights reserved.
//

#include <stdio.h>

void disp(int num){/*戻り値なし*/
    printf("%d",num);
}
int add(int a,int b){
    return a+b;
}

int main() {
    disp(55);
    
    disp(add(20,50));
    return 0;
}
