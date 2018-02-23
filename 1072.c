#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct student{
    char name[5];
    int num;
    char obj[10][5];
};
int main(){
    int n,m,i,j,k,l,numstu=0,numobj=0,flag=0;
    scanf("%d%d",&n,&m);
    struct student all,wbd;
    all.num=m;
    for(i=0;i<m;i++){
        scanf("%s",all.obj[i]);
    }
    for(l=0;l<n;l++){
        scanf("%s%d",wbd.name,&wbd.num);
        for(j=0;j<wbd.num;j++){
            scanf("%s",wbd.obj[j]);
        }
        for(i=0;i<wbd.num;i++){
            for(k=0;k<all.num;k++){
                if(strcmp(all.obj[k],wbd.obj[i])==0){
                    if(flag==0){
                        printf("%s:",wbd.name);
                        flag=1;
                        numstu++;
                    }
                    printf(" %s",wbd.obj[i]);
                    numobj++;
                }
            }
        }
        if(flag==1){
            printf("\n");
            flag=0;
        }
    }
    printf("%d %d\n",numstu,numobj);
    return 0;
}

