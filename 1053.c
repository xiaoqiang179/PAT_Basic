#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int max,i,j,k,tempc=0;
    double n,min,temp,countofmay=0,countofsure=0;
    scanf("%lf%lf%d",&n,&min,&max);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        for(j=0;j<k;j++){
            scanf("%lf",&temp);
            if(temp<min){
                tempc++;
            }
        }
        if(tempc>k/2&&k<=max){
            countofmay++;
        }
        if(k>max&&tempc>k/2){
            countofsure++;
        }
        tempc=0;
    }
    printf("%.1f%% %.1f%%",countofmay*100.0/n,countofsure*100.0/n);
    return 0;
}

