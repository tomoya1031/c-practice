#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

//    getchar();
//    printf("はいいですね");
    int a,b,c,pw,pw_in;
    char *u;

    if(argc !=2){
        fprintf(stderr,"usage: %s<user bame>\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    u=argv[1];
    a=u[0]+u[2]+u[4];
    b=a*u[1];
    c=b-u[4];
    pw=c/u[5];
    printf("password: ");
    scanf("%d",&pw_in);
    if(pw==pw_in){
        printf("OK\n");
    }else{
        printf("No\n");
    }
    printf("password=%d\n",pw);
    return EXIT_SUCCESS;
}