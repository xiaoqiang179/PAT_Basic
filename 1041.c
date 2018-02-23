#include <stdio.h>
typedef struct student{
    char kaohao[15];
    int test;
    int seat;
}student;
int main(){
    student a[1000];
    int n,m,cha[1000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s%d%d",a[i].kaohao,&a[i].test,&a[i].seat);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&cha[i]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(cha[i]==a[j].test){
                printf("%s %d\n",a[j].kaohao,a[j].seat);
            }
        }
    }
    return 0;
}

