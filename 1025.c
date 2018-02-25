
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct node{
    int data;
    int add;
};
int linked[100100][2]={0};
int main(){
    int next,head,n,k;
    int t1,t2,t3,i,t,j;
    struct node out[100001]={0};
    scanf("%d%d%d",&head,&n,&k);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&t1,&t2,&t3);
        linked[t1][0]=t2;
        linked[t1][1]=t3;
    }
    next=head;
    i=0;
    while(next!=-1){
        out[i].data=linked[next][0];
        out[i].add=next;
        next=linked[next][1];
        i++;
    }
    t=i;
    for(i=0;i<t;i=i+k){
        if(i+k<=t){
            for(j=0;j<k/2;j++){
                struct node temp=out[i+j];
                out[i+j]=out[k-j-1+i];
                out[k-j-1+i]=temp;
            }
        }
    }
    for(i=0;i<t;i++){
        if(i==t-1){
            printf("%05d %d -1\n",out[i].add,out[i].data);
        }
        else{
            printf("%05d %d %05d\n",out[i].add,out[i].data,out[i+1].add);
        }
    }
    return 0;
}

