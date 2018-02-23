#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int a[37]={0},n,i,j,flag=0,t=0;
    char str[5];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str);
        int sum=0;
        for(j=0;j<strlen(str);j++){
            sum+=str[j]-'0';
        }
        if(a[sum]==0){
            a[sum]++;
            t++;
        }
    }
    printf("%d\n",t);
    for(i=0;i<37;i++){
        if(a[i]==1){
            if(flag==1){
                printf(" %d",i);
            }
            else{
                printf("%d",i);
                flag=1;
            }
        }
    }
    printf("\n");
    return 0;
}


