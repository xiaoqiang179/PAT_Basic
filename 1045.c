#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
int arr[100010]={0},result[100010]={0},temp,flag=0,count=0;
int main(){
    int n,i,j=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>temp){
            temp=arr[i];
            result[i]=1;
            flag=1;
        }
    }
    if(flag==1){
        result[0]=1;
    }
    flag=0;
    temp=arr[n-1];
    for(i=n-2;i>-1;i--){
        if(temp>arr[i]){
            temp=arr[i];
            if(result[i]==1){
                result[i]=2;
                count++;
            }
            flag=1;
        }
    }
    if(flag==1){
        if(result[n-1]==1){
            result[n-1]=2;
            count++;
        }
    }
    flag=0;
    printf("%d\n",count);
    for(i=0;i<n;i++){
        if(result[i]==2){
            if(flag==0){
                printf("%d",arr[i]);
                flag=1;
            }
            else{
                printf(" %d",arr[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
