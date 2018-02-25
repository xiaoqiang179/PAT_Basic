#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct node{
    int data;
    int add;
};
int linked[100000][2];
int main(){
    int next,head,n,k;
    int t1,t2,t3,i;
    struct node out1[100010],out2[100010],out3[100010];
    scanf("%d%d%d",&head,&n,&k);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&t1,&t2,&t3);
        linked[t1][0]=t2;
        linked[t1][1]=t3;
    }
    next=head;
    t1=0;
    t2=0;
    t3=0;
    while(next!=-1){
        if(linked[next][0]<0){
            out1[t1].data=linked[next][0];
            out1[t1].add=next;
            t1++;
        }
        else if(linked[next][0]>=0&&linked[next][0]<=k){
            out2[t2].data=linked[next][0];
            out2[t2].add=next;
            t2++;
        }
        else{
            out3[t3].data=linked[next][0];
            out3[t3].add=next;
            t3++;
        }
        next=linked[next][1];
    }
    for(i=0;i<t1;i++){
        if(i==t1-1&&t2==0&&t3==0){
            printf("%05d %d -1\n",out1[i].add,out1[i].data);
        }
        else if(i==t1-1&&t2!=0){
            printf("%05d %d %05d\n",out1[i].add,out1[i].data,out2[0].add);
        }
        else if(i==t1-1&&t2==0&&t3!=0){
            printf("%05d %d %05d\n",out1[i].add,out1[i].data,out3[0].add);
        }
        else{
            printf("%05d %d %05d\n",out1[i].add,out1[i].data,out1[i+1].add);
        }
    }
    for(i=0;i<t2;i++){
        if(i==t2-1&&t3==0){
            printf("%05d %d -1\n",out2[i].add,out2[i].data);
        }
        else if(i==t2-1&&t3!=0){
            printf("%05d %d %05d\n",out2[i].add,out2[i].data,out3[0].add);
        }
        else{
            printf("%05d %d %05d\n",out2[i].add,out2[i].data,out2[i+1].add);
        }
    }
    for(i=0;i<t3;i++){
        if(i==t3-1){
            printf("%05d %d -1\n",out3[i].add,out3[i].data);
        }
        else{
            printf("%05d %d %05d\n",out3[i].add,out3[i].data,out3[i+1].add);
        }
    }
    return 0;
}

