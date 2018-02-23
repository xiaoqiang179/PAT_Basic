#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char a,b;
    int n,i,j;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        for(j=1;j<=4;j++){
            scanf("%c-%c",&a,&b);
            if(b=='T'){
                printf("%d",a-'A'+1);
            }
            getchar();
        }
    }
    printf("\n");
    return 0;
}


