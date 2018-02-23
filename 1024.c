#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char str[10000];
    scanf("%s",str);
    int i;
    for(i=1;i<strlen(str);i++){
        if(str[i]=='E'){
            break;
        }
    }
    int temp=i;
    int c=atoi(str+i+1);
    if(c<0){
        c=-c;
        if(str[0]=='-'){
            printf("-");
        }
        for(i=0;i<c;i++){
            printf("0");
            if(i==0){
                printf(".");
            }
        }
        for(i=1;i<temp;i++){
            if(str[i]=='.'){
                i++;
            }
            printf("%c",str[i]);
        }
    }
    else if(c==0){
        printf("1");
    }
    else{
        if(str[0]=='-'){
            printf("-");
        }
        int d=temp-3;
        if(c>=d){
            for(i=1;i<temp;i++){
                if(str[i]=='.'){
                    i++;
                }
                printf("%c",str[i]);
            }
            for(i=0;i<c-d;i++){
                printf("0");
            }
        }
        else{
            for(i=1;i<temp;i++){
                if(str[i]=='.'){
                    i++;
                }
                printf("%c",str[i]);
                if(i==c+2){
                    printf(".");
                }
            }
        }
    }
    return 0;
}


