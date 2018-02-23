#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int cmp(int *p,int *q){
    if(*p>*q){
        return 1;
    }
    else if(*p<*q){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    int n,data[100000][2]={0},store[10000]={0},i,t1,t2,flag=0,out[10000]={0};
    int t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&t1,&t2);
        data[t1][0]=1;               //0说明是否有对象 1对象号
        data[t2][0]=1;
        data[t1][1]=t2;
        data[t2][1]=t1;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t1);
        store[i]=t1;
        if(data[t1][0]==1||data[t1][0]==2){
            data[data[t1][1]][0]=2;
        }
    }
    qsort(store, n, sizeof(int), cmp);
    for(i=0;i<n;i++){
        if(data[store[i]][0]!=2){
            out[t++]=store[i];
        }
    }
    printf("%d\n",t);
    for(i=0;i<t;i++){
        if(flag==0){
            printf("%05d",out[i]);
            flag=1;
        }
        else{
            printf(" %05d",out[i]);
        }
    }
    return 0;
}

