#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int cmp(const void* p,const void* q){
    double a=*(const double*)p;
    double b=*(const double*)q;
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
    int n,i,max=0,j;
    double arr[100030]={0},p;
    scanf("%d%lf",&n,&p);
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    qsort(arr, n, sizeof(double), cmp);
    for(i=n-1;i>=max;i--){
        for(j=i-max;j>=0;j--){
            if(arr[j]*p<arr[i]){
                break;
            }
        }
        if(i-j>max){
            max=i-j;
        }
    }
    printf("%d",max);
    return 0;
}

