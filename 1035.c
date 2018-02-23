#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
bool compare(double *p,double *q,int len){
    int i;
    for(i=0;i<len;i++){
        if(p[i]!=q[i]){
            return false;
        }
    }
    return true;
}
int cmp(const void* a, const void* b){
    double arg1 = *(const double*)a;
    double arg2 = *(const double*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
int main(){
    int n,i,j,k,flag=0,flag1=0;
    double arr[1000]={0},arr2[1000]={0},temp[1000]={0},sec[1000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    for(k=0;k<n;k++){
        sec[k]=arr[k];
    }
    for(i=0;i<n;i++){
        scanf("%lf",&arr2[i]);
    }
    for(i=1;i<n;i++){
        for (j = i - 1; j >= 0; j--)
            if (arr[j] < arr[i])
                break;
        if (j != i - 1){
            double temp = arr[i];
            for (k = i - 1; k > j; k--){
                arr[k + 1] = arr[k];
            }
            arr[k + 1] = temp;
        }
        for(k=0;k<n;k++){
            temp[k]=arr[k];
        }
        if(flag==1){
            printf("Insertion Sort\n");
            for(k=0;k<n;k++){
                if(flag1==0){
                    printf("%.0f",temp[k]);
                    flag1=1;
                }
                else{
                    printf(" %.0f",temp[k]);
                }
            }
            return 0;
        }
        if(compare(arr2, temp, n)==true){
            flag=1;
        }
    }
    flag1=flag=0;
    printf("Merge Sort\n");
    for(i=2;i<n;i=i*2){
        if(compare(sec, arr2, n)==true){
            flag=1;
        }
        for(j=0;j<n;j=j+i){
            if(j+i<=n){
                qsort(sec+j, i, sizeof(double), cmp);
            }
        }
        qsort(sec+j-i, n%i, sizeof(double), cmp);
        if(flag==1){
            for(k=0;k<n;k++){
                if(flag1==0){
                    printf("%.0f",sec[k]);
                    flag1=1;
                }
                else{
                    printf(" %.0f",sec[k]);
                }
            }
            return 0;
        }
    }
    qsort(sec, n, sizeof(double), cmp);
    for(i=0;i<n;i++){
        if(flag==0){
            printf("%.0f",sec[i]);
            flag=1;
        }
        else{
            printf(" %.0f",sec[i]);
        }
    }
    return 0;
}


