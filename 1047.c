#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int n,a[1001]={0},score,i,j,max=0,maxi=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d-%*d %d",&j,&score);
        a[j]+=score;
    }
    for(i=1;i<=1000;i++){
        if(a[i]>max){
            max=a[i];
            maxi=i;
        }
    }
    printf("%d %d\n",maxi,max);
    return 0;
}


