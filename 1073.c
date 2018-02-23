#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int rec[100][5];
struct answer{
    double score;
    int all;
    int right;
    int data[5];
};
bool compare(int *p,int *q){     //判定满分
    int i;
    for(i=0;i<5;i++){
        if(p[i]!=q[i]){
            return false;
        }
    }
    return true;
}
bool allright(int *p,int *q){    //无错误 不一定满分
    int i;
    for(i=0;i<5;i++){
        if(p[i]==0&&q[i]==1){
            return false;
        }
    }
    return true;
}
void record(int *p,int *q,int t){
    int i;
    for(i=0;i<5;i++){
        if(p[i]!=q[i]){
            rec[t][i]++;
        }
    }
}
int main(){
    int n,m,i,j,k,l,aly[100],stuans[5],max=0,flag=0,flag1=0;
    char ch,dis;
    struct answer ans[110]={0};
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%lf%d%d",&ans[i].score,&ans[i].all,&ans[i].right);
        for(j=0;j<ans[i].right;j++){
            dis=getchar();
            scanf("%c",&ch);
            ans[i].data[ch-'a']=1;
        }
        dis=getchar();
    }
    //dis=getchar();
    for(i=0;i<n;i++){
        double stusc=0;
        for(j=0;j<m;j++){
            while((ch=getchar())!=')'){
                if(ch>='a'&&ch<='z'){
                    stuans[ch-'a']=1;
                }
            }
            if(allright(ans[j].data,stuans)==true){
                if(compare(stuans, ans[j].data)==true){
                    stusc+=ans[j].score;
                }
                else{
                    stusc+=ans[j].score/2.0;
                    record(stuans, ans[j].data, j);
                }
            }
            else{
                record(stuans, ans[j].data, j);
            }
            memset(stuans, 0,sizeof(int)*5);
        }
        printf("%.1f\n",stusc);
        dis=getchar();
    }
    for(i=0;i<m;i++){
        for(j=0;j<5;j++){
            if(rec[i][j]>max){
                max=rec[i][j];
                flag1=1;
            }
        }
    }
    if(flag1!=0){
        for(i=0;i<m;i++){
            for(j=0;j<5;j++){
                if(rec[i][j]==max){
                    printf("%d %d-%c\n",max,i+1,j+'a');
                    flag=1;
                }
            }
        }
    }
    if(flag==0){
        printf("Too simple");
    }
    return 0;
}

