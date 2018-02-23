#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int a[10],i,j;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++){
        if(a[i]!=0){
            printf("%d",i);
            a[i]--;
            break;
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<a[i];j++){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}


