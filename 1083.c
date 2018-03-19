#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int res[10010];
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int temp;
        scanf("%d",&temp);
        res[abs(temp-i)]++;
    }
    for(i=10009;i>=0;i--){
        if(res[i]>1){
            printf("%d %d\n",i,res[i]);
        }
    }
    return 0;
}

