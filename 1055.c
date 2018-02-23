#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct student{
    char name[10];
    int height;
};
int cmp(const void *p,const void *q){
    const struct student a=*(const struct student *)p;
    const struct student b=*(const struct student *)q;
    if(a.height>b.height){       //降序
        return -1;
    }
    else if(a.height<b.height){
        return 1;
    }
    else{
        if(strcmp(a.name, b.name)>0){    //升序
            return 1;
        }
        else if(strcmp(a.name, b.name)<0){
            return -1;
        }
        else{
            return 0;
        }
    }
}
void birth(int *p,int len){
    int i,temp;
    if(len==1){
        p[0]=1;
    }
    else if(len%2==0){
        p[0]=1;
        for(i=1;i<len/2;i++){
            p[i]=p[i-1]+2;
        }
        if(i<len)
            p[i]=p[i-1]+1;
        temp=++i;
        for(i=temp;i<len;i++){
            p[i]=p[i-1]-2;
        }
    }
    else{
        p[0]=2;
        for(i=1;i<len/2;i++){
            p[i]=p[i-1]+2;
        }
        if(i<len)
            p[i]=p[i-1]+1;
        temp=++i;
        for(i=temp;i<len;i++){
            p[i]=p[i-1]-2;
        }
    }
}
int main(){
    int n,k,i,j,r1[10000]={0},r2[10000]={0},flag=0,len1,len2;
    struct student arr[10010];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%s%d",arr[i].name,&arr[i].height);
    }
    qsort(arr, n, sizeof(struct student), cmp);
    if(k>n){
        len1=len2=1;
    }
    else{
        len1=n/k+n%k;
        len2=n/k;
    }
    birth(r1, len1);
    birth(r2, len2);
    for(i=0;i<len1;i++){
        if(flag==0){
            printf("%s",arr[len1-r1[i]].name);
            flag=1;
        }
        else{
            printf(" %s",arr[len1-r1[i]].name);
        }
    }
    flag=0;
    for(i=len1;i<n;i=i+len2){
        printf("\n");
        for(j=0;j<len2;j++){
            if(flag==0){
                printf("%s",arr[len2-r2[j]+i].name);
                flag=1;
            }
            else{
                printf(" %s",arr[len2-r2[j]+i].name);
            }
        }
        flag=0;
    }
    printf("\n");
    return 0;
}

