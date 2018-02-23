#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int cmp(const void *p,const void *q){
    int a=*(const int*)p;
    int b=*(const int*)q;
    if(a>b){
        return 1;
    }
    else if(a<b){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    int n,arr[10000]={0},i;
    double sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr, n, sizeof(int), cmp);
    sum=arr[0];
    for(i=1;i<n;i++){
        sum=(sum+arr[i])/2.0;
    }
    int temp=sum;
    printf("%d",temp);
    return 0;
}

