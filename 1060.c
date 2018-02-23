#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int cmp(const void *p,const void *q){
    const double *a=(const double*)p;
    const double *b=(const double*)q;
    return *b-*a;
}
int main(){
    int n,i,count=0,max=0;
    double arr[100000],min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    qsort(arr, n, sizeof(double), cmp);
    for(i=0;i<n;i++){
        count++;
        if(count<arr[i]){
            if(count>max){
                max=count;
            }
        }
        min=arr[i];
    }
    printf("%d",max);
    return 0;
}

