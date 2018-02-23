#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char result[30],in[30];
    int maxt,i=0;
    scanf("%s%d",result,&maxt);
    getchar();
    while(gets(in)){
        if(strlen(in)==1&&in[0]=='#'&&strcmp(in, result)!=0){
            break;
        }
        if(strcmp(in, result)==0){
            printf("Welcome in\n");
            break;
        }
        if(strcmp(in, result)!=0){
            printf("Wrong password: %s\n",in);
            i++;
            if(i>=maxt){
                break;
            }
        }
    }
    if(i>=maxt){
        printf("Account locked\n");
    }
    return 0;
}


