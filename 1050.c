#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int cmp(int *a,int *b){
    if(*a>*b){
        return -1;
    }
    else if(*a<*b){
        return 1;
    }
    else{
        return 0;
    }
}
int out[10000][10000];
int main(){
    int k,n=0,m=0,i,h,l,j,t=0,arr[10010]={0},min=99999;
    int flag=0;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=k;i++){
        if(k%i==0){
            if(i>=k/i&&i-k/i<min){
                min=i-k/i;
                m=i;
                n=k/i;
            }
        }
    }
    qsort(arr, k, sizeof(int), cmp);
    j=0;l=0;
    for(i=0;i<n/2+n%2;i++){
        h=l=i;
        for(j=i;j<n-i-1&&t<k;j++){
            out[l][j]=arr[t++];
        }
        for(l=i;l<m-i-1&&t<k;l++){
            out[l][j]=arr[t++];
        }
        for(j=n-i-1;j>i&&t<k;j--){
            out[l][j]=arr[t++];
        }
        for(l=m-i-1;l>i&&t<k;l--){
            out[l][j]=arr[t++];
        }
    }
    if(m==n&&m%2==1){
        out[n/2+n%2-1][n/2+n%2-1]=arr[k-1];
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(flag==0){
                printf("%d",out[i][j]);
                flag=1;
            }
            else{
                printf(" %d",out[i][j]);
            }
        }
        printf("\n");
        flag=0;
    }
    return 0;
}



