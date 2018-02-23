#include <stdio.h>
#include <string.h>
struct student{
    char a[128];
    char xh[128];
    int cj;
};
int main(){
    int n,i;
    scanf("%d",&n);
    struct student s,max,min;
    max.cj=0;
    min.cj=100;
    for(i=1;i<=n;i++){
        scanf("%s%s%d",s.a,s.xh,&s.cj);
        if(s.cj>max.cj){
            strcpy(max.a, s.a);
            strcpy(max.xh, s.xh);
            max.cj=s.cj;
        }
        if(s.cj<min.cj){
            strcpy(min.a, s.a);
            strcpy(min.xh, s.xh);
            min.cj=s.cj;
        }
    }
    printf("%s %s\n",max.a,max.xh);
    printf("%s %s\n",min.a,min.xh);
}

