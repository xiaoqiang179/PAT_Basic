#include <stdio.h>
int map[100010][1005];
int main(){
    int n,m,i,j,k,t1,t2,t;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d%d",&t1,&t2);
        if(map[t1][0]==0){
            map[t1][0]=1;
            map[t1][map[t1][0]++]=t2;
        }
        else{
            map[t1][map[t1][0]++]=t2;
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&t);
        int temp[100010]={0},rec[1010]={0},flag=1;
        for(j=0;j<t;j++){
            scanf("%d",&t1);
            temp[t1]=1;
            rec[j]=t1;
        }
        for(j=0;j<t;j++){
            for(k=1;k<map[rec[j]][0];k++){
                if(temp[map[rec[j]][k]]==1){
                    flag=0;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}

