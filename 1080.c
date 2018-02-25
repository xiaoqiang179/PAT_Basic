#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
struct output{
    char name[30];
    int pro,mid,final;
    int all;
};
int cmp(const void *p,const void *q){
    const struct output a=*(const struct output*)p;
    const struct output b=*(const struct output*)q;
    if(a.all>b.all){
        return -1;
    }
    else if(a.all<b.all){
        return 1;
    }
    else{
        if(strcmp(a.name, b.name)>0){
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
int cmp1(const void *p,const void *q){
    const struct output a=*(const struct output*)p;
    const struct output b=*(const struct output*)q;
    if(strcmp(a.name, b.name)>0){
        return 1;
    }
    else if(strcmp(a.name, b.name)<0){
        return -1;
    }
    else{
        return 0;
    }
}
struct output shit[101000];
struct output allsc[301000];
int main(){
    int p,m,n,i,j,t=-1,sign=0;
    scanf("%d%d%d%*c",&p,&m,&n);
    for(i=0;i<p;i++){
        scanf("%s%d%*c",allsc[i].name,&allsc[i].pro);
    }
    j=i;
    for(i=j;i<j+m;i++){
        scanf("%s%d%*c",allsc[i].name,&allsc[i].mid);
        if(allsc[i].mid==0){
            allsc[i].mid=-2;
        }
    }
    j=i;
    for(i=j;i<n+j;i++){
        scanf("%s%d%*c",allsc[i].name,&allsc[i].final);
    }
    qsort(allsc, p+m+n, sizeof(struct output), cmp1);
    while(sign<p+m+n){
        struct output temp;
        temp=allsc[sign];
        while(strcmp(temp.name, allsc[sign+1].name)==0){
            temp.mid+=allsc[sign+1].mid;
            temp.final+=allsc[sign+1].final;
            temp.pro+=allsc[sign+1].pro;
            sign++;
        }
        sign++;
        if(temp.pro>=200){
            if(temp.mid>temp.final){
                temp.all=temp.mid*0.4+temp.final*0.6+0.5;
            }
            else{
                temp.all=temp.final;
            }
            if(temp.all>=60){
                t++;
                shit[t]=temp;
            }
        }
    }
    qsort(shit, t+1, sizeof(struct output), cmp);
    for(i=0;i<=t;i++){
        printf("%s",shit[i].name);
        printf(" %d",shit[i].pro);
        if(shit[i].mid==0){
            printf(" -1");
        }
        else if(shit[i].mid==-2){
            printf(" 0");
        }
        else{
            printf(" %d",shit[i].mid);
        }
        printf(" %d",shit[i].final);
        printf(" %d",shit[i].all);
        printf("\n");
    }
    return 0;
}

