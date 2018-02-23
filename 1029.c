#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char real[81],ready[81];
    scanf("%s%s",ready,real);
    int i,r1[37]={0},r2[37]={0},result[37]={0},ped[37]={0};
    for(i=0;i<strlen(real);i++){
        if(real[i]>='a'&&real[i]<='z'){
            real[i]=real[i]-'a'+'A';
        }
    }
    for(i=0;i<strlen(ready);i++){
        if(ready[i]>='a'&&ready[i]<='z'){
            ready[i]=ready[i]-'a'+'A';
        }
    }
    for(i=0;i<strlen(real);i++){
        if(real[i]<='9'&&real[i]>='0'){
            if(r1[26+real[i]-'0']==0){
                r1[26+real[i]-'0']++;
            }
        }
        if(real[i]>='A'&&real[i]<='Z'){
            if(r1[real[i]-'A']==0){
                r1[real[i]-'A']++;
            }
        }
        if(real[i]=='_'){
            r1[36]=1;
        }
    }
    for(i=0;i<strlen(ready);i++){
        if(ready[i]<='9'&&ready[i]>='0'){
            if(r2[26+ready[i]-'0']==0){
                r2[26+ready[i]-'0']++;
            }
        }
        if(ready[i]>='A'&&ready[i]<='Z'){
            if(r2[ready[i]-'A']==0){
                r2[ready[i]-'A']++;
            }
        }
        if(ready[i]=='_'){
            r2[36]=1;
        }
    }
    for(i=0;i<37;i++){
        if(r1[i]!=r2[i]){
            result[i]++;
        }
    }
    for(i=0;i<strlen(ready);i++){
        if(ready[i]>='0'&&ready[i]<='9'){
            if(result[26+ready[i]-'0']!=0){
                if(ped[26+ready[i]-'0']==0){
                    printf("%c",ready[i]);
                }
                ped[26+ready[i]-'0']++;
            }
        }
        if(ready[i]>='A'&&ready[i]<='Z'){
            if(result[ready[i]-'A']!=0){
                if(ped[ready[i]-'A']==0){
                    printf("%c",ready[i]);
                }
                ped[ready[i]-'A']++;
            }
        }
        if(ready[i]=='_'){
            if(result[36]!=0){
                if(ped[36]==0){
                    printf("_");
                }
                ped[36]++;
            }
        }
    }
    return 0;
}


