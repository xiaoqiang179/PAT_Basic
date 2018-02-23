#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int n,i,a[100001]={0},in[100001]={0},t=0,max=0,j=0,maxi=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int g,score;
        scanf("%d%d",&g,&score);
        if(a[g]==0){
            a[g]+=score;
            in[j]=g;
            j++;
            t++;
        }
        else{
            a[g]+=score;
        }
    }
    for(i=0;i<t;i++){
        if(a[in[i]]>max){
            max=a[in[i]];
            maxi=in[i];
        }
    }
    printf("%d %d\n",maxi,max);
    return 0;
}
