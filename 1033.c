#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char ch;
    int no[41]={0};
    int i,j;
    while((ch=getchar())!='\n'){
        if(ch=='+'){
            if(no[0]==0){
                no[0]++;
            }
        }
        else if(ch>='A'&&ch<='Z'){
            if(no[ch-'A'+15]==0){
                no[ch-'A'+15]++;
            }
        }
        else if(ch=='_'){
            if(no[1]==0){
                no[1]++;
            }
        }
        else if(ch==','){
            if(no[2]==0){
                no[2]++;
            }
        }
        else if(ch=='.'){
            if(no[3]==0){
                no[3]++;
            }
        }
        else if(ch=='-'){
            if(no[4]==0){
                no[4]++;
            }
        }
        else{
            if(no[ch-'0'+5]==0){
                no[ch-'0'+5]++;
            }
        }
    }
    while((ch=getchar())!='\n'){
        if(ch>='A'&&ch<='Z'){
            if(no[0]==0&&no[ch-'A'+15]==0){
                printf("%c",ch);
            }
        }
        else if(ch>='a'&&ch<='z'){
            if(no[ch-'a'+15]==0){
                printf("%c",ch);
            }
        }
        else if(ch>='0'&&ch<='9'){
            if(no[ch-'0'+5]==0){
                printf("%c",ch);
            }
        }
        else if(ch=='_'){
            if(no[1]==0){
                printf("_");
            }
        }
        else if(ch==','){
            if(no[2]==0){
                printf(",");
            }
        }
        else if(ch=='.'){
            if(no[3]==0){
                printf(".");
            }
        }
        else if(ch=='-'){
            if(no[4]==0){
                printf("-");
            }
        }
    }
    return 0;
}


