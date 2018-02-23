#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=1,flag,sum[9999]={0},i1=2,i2=0;
  sum[0]=2;
    sum[1]=3;
    while(temp<=n){
        for(int i=2;i<=sqrt(temp);i++){
            flag=1;
            if(temp%i==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            sum[i1]=temp;
            i1++;
        }
        temp++;
    }
    i1=0;
    while(sum[i1]){
        if(sum[i1]-sum[i1+1]==-2){
            i2++;
        }
        i1++;
    }
    printf("%d",i2);
    return 0;
}

