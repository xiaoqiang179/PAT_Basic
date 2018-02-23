#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int a[101]={0},n,i,temp,flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        a[temp]++;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        if(flag==1){
            printf("%d",a[temp]);
            flag=0;
        }
        else{
            printf(" %d",a[temp]);
        }
    }
    return 0;
}


