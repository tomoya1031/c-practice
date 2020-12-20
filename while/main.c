//
//  main.c
//  while
//
//  Created by 上田智也 on 2019/12/18.
//  Copyright © 2019 上田智也. All rights reserved.
//

#include <stdio.h>

int main(){
　int count=0;
  while(count<7){
      printf("%d回目\n",count+1);

      count++;       /*これを入れ忘れると無限ループになる*/
}
    return 0;
}
