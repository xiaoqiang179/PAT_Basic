#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int m,n,s,i,out,t=0,j,flag=0;
    char temp[30],choosed[1000][30];
    scanf("%d%d%d",&m,&n,&s);
    out=s;
    if(n+s>m){
        printf("Keep going...\n");
    }
    else{
        for(i=1;i<=m;i++){
            scanf("%s",temp);
            if(i==out){
                for(j=0;j<t;j++){
                    if(strcmp(choosed[j], temp)==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    strcpy(choosed[t++], temp);
                    printf("%s\n",temp);
                    out+=n;
                }
                else{
                    out+=1;
                    flag=0;
                }
            }
        }
    }
    return 0;
}

