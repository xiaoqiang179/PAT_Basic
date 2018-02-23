#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
char in[10000]={'\0'};
int main(){
    int i,j=0,k,count=1;
    char sign,now,temp[1000]={'\0'},bef;
    scanf("%c",&sign);
    getchar();
    if(sign=='C'){
        bef=getchar();
        while(1){
            now=getchar();
            if(now=='\n'){
                if(count!=1){
                    printf("%d%c",count,bef);
                    break;
                }
                else{
                    printf("%c",bef);
                    break;
                }
            }
            if(now==bef){
                count++;
            }
            else{
                if(count==1){
                    printf("%c",bef);
                    bef=now;
                }
                else{
                    printf("%d%c",count,bef);
                    bef=now;
                    count=1;
                }
            }
        }
    }
    else{
        gets(in);
        for(i=0;i<strlen(in);i++){
            if(in[i]>='0'&&in[i]<='9'){
                temp[j++]=in[i];
            }
            if((in[i]>='a'&&in[i]<='z')||(in[i]>='A'&&in[i]<='Z')||in[i]==' '){
                if(in[i-1]>='0'&&in[i-1]<='9'){
                    for(k=0;k<atoi(temp);k++){
                        printf("%c",in[i]);
                    }
                    memset(temp, '\0', 100);
                    j=0;
                }
                else{
                    printf("%c",in[i]);
                }
            }
        }
    }
    return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
char in[10000]={'\0'};
int main(){
    int i,j=0,k,count=1;
    char sign,now,temp[100]={'\0'};
    scanf("%c",&sign);
    getchar();
    gets(in);
    if(sign=='C'){
        for(i=0;i<strlen(in);i++){
            if(i!=strlen(in)-1){
                if(in[i+1]==in[i]){
                    count++;
                }
                else{
                    if(count==1){
                        printf("%c",in[i]);
                    }
                    else{
                        printf("%d%c",count,in[i]);
                    }
                    count=1;
                }
            }
            else{
                if(count==1){
                    printf("%c",in[i]);
                }
                else{
                    printf("%d%c",count,in[i]);
                }
            }
        }
    }
    else{
        for(i=0;i<strlen(in);i++){
            if(in[i]>='0'&&in[i]<='9'){
                temp[j++]=in[i];
            }
            if((in[i]>='a'&&in[i]<='z')||(in[i]>='A'&&in[i]<='Z')||in[i]==' '){
                if(in[i-1]>='0'&&in[i-1]<='9'){
                    for(k=0;k<atoi(temp);k++){
                        printf("%c",in[i]);
                    }
                    memset(temp, '\0', 100);
                    j=0;
                }
                else{
                    printf("%c",in[i]);
                }
            }
        }
    }
    printf("\n");
    return 0;
}
*/

