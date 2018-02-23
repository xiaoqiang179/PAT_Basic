#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct answer{
    int score;
    int all;
    int right;
    int data[5];
};
bool compare(int *p,int *q){
    int i;
    for(i=0;i<5;i++){
        if(p[i]!=q[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m,i,j,k,l,aly[100],stuans[5],max=0,flag=0,flag1=0;
    char ch,dis,temp[100];
    struct answer ans[110]={0};
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d%d%d",&ans[i].score,&ans[i].all,&ans[i].right);
        for(j=0;j<ans[i].right;j++){
            dis=getchar();
            scanf("%c",&ch);
            ans[i].data[ch-'a']=1;
        }
        dis=getchar();
    }
    //dis=getchar();
    for(i=0;i<n;i++){
        int stusc=0;
        for(j=0;j<m;j++){
            while((ch=getchar())!=')'){
                if(ch>='a'&&ch<='z'){
                    stuans[ch-'a']=1;
                }
            }
            if(compare(stuans, ans[j].data)==true){
                stusc+=ans[j].score;
            }
            else{
                aly[j]++;
            }
            memset(stuans, 0,sizeof(int)*5);
        }
        printf("%d\n",stusc);
        dis=getchar();
    }
    for(i=0;i<m;i++){
        if(aly[i]>max){
            max=aly[i];
        }
    }
    for(i=0;i<m;i++){
        if(aly[i]==max&&aly[i]!=0){
            printf("%d",aly[i]);
            flag1=1;
            break;
        }
    }
    if(flag1==1){
        for(i=0;i<m;i++){
            if(aly[i]==max){
                printf(" %d",i+1);
            }
        }
    }
    if(flag1==0){
        printf("Too simple");
    }
    return 0;
}

