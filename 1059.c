#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int pdprime(long long n){       //判断素数，1是，0不是
    int flag=1;
    for(int i=2;i<=sqrt(n);i++){
        if((long long)n%i==0){
            flag=0;
            break;
        }
    }
    if(n==1){
        flag=0;
    }
    return flag;
}
int main(){
    int arr[10003][2]={0},n,m,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        arr[m][0]=i;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        if(arr[m][1]==1){
            printf("%04d: Checked\n",m);
        }
        else if(arr[m][0]==0){
            printf("%04d: Are you kidding?\n",m);
        }
        else if(arr[m][0]==1){
            arr[m][1]=1;
            printf("%04d: Mystery Award\n",m);
        }
        else if(pdprime(arr[m][0])==1){
            arr[m][1]=1;
            printf("%04d: Minion\n",m);
        }
        else{
            arr[m][1]=1;
            printf("%04d: Chocolate\n",m);
        }
    }
    return 0;
}

