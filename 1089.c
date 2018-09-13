#include <stdio.h>
#include <stdbool.h>
bool check(int wof1,int wof2,int *say,int n){
    int temp[120]={0};
    for(int i=0;i<n;i++){
        if(say[i]<0){
            if(!(say[i]==-wof1||say[i]==-wof2)){
                temp[i+1]=1;
            }
        }
        else{
            if(say[i]==wof1||say[i]==wof2){
                temp[i+1]=1;
            }
        }
    }
    int cc=0,flag=0;
    for(int i=1;i<=n;i++){
        if(temp[i]==1){
            cc++;
            if(i==wof1){
                if(flag==0){
                    flag=1;
                }
                else{
                    flag=4;
                }
            }
            if(i==wof2){
                if(flag==0){
                    flag=2;
                }
                else{
                    flag=4;
                }
            }
        }
    }
    if(cc==2){
        if(flag==1||flag==2){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
int main(){
    int n,say[110]={0},i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&say[i]);
    }
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(check(i, j, say, n)==true){
                printf("%d %d\n",i,j);
                return 0;
            }
        }
    }
    printf("No Solution\n");
    return 0;
}

