#include <stdio.h>

int ori(int);

int main(void){

    int y;

    scanf("%d",&y);

    ori(y);
	return 0;
}

int ori(int a)
{   
    if (a>1999)
    {
        if(a%4==0){
            printf("夏\n");
        }else if (a%4==2)
        {
            printf("冬\n");
        }else
        {
            printf("開催されません\n");
        }
        
    }else
    {
        printf("2000年以下です。\n");
    }
	return 0;
}
