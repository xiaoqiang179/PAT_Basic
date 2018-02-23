#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int compare_ints(const void* a, const void* b){
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    if (arg1 < arg2) return 1;
    if (arg1 > arg2) return -1;
    return 0;
}
int main(){
    int n,arr[101]={0},i,j=1,h;
    scanf("%d",&n);
    if(n==1){
        scanf("%d",&n);
        printf("%d",n);
        return 0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare_ints);
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            while(temp!=1){
                if(temp%2==0){
                    temp/=2;
                }
                else{
                    temp=(3*temp+1)/2;
                    //  temp=3*temp+1;
                }
                for(h=0;h<n;h++){
                    if(arr[h]==temp){
                        arr[h]=0;
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            if(j==1){
                printf("%d",arr[i]);
                j=0;
            }
            else{
                printf(" %d",arr[i]);
            }
        }
    }
    return 0;
}


