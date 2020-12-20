


#include <stdio.h>/*命令読み込み*/
#include <math.h>
 

int main()
{
    int a;/*変数*/
    a=100;
    double b;
    b=++a;
    int c[3];/*配列*/
    c[0]=2;
    c[1]=3;
    c[2]=5;
    printf("hello world!\n");/*文章*/
    printf("%d\n",7%2);/*計算*/
    pow(2,8);/*二乗（mathヘッダーを読み込み）*/
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c[2]);
    return 0;
}
