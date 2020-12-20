#include "stdio.h"

int main(){
  
    int c,d;
    c=3;
    d=4;
    
 /*   if(c < d){
        printf("aはbより小さいです");
    }
    else if(c > d){
        printf("aはbより大きいです");
    }
    else{
        printf("aはbと等しいです");
    }*/
    
    c<d?printf("小さいです"):printf("等しいです");
    
    return 0;
}
