#include<stdio.h>
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
    int m,n,temp=2,i=0,i1=0,i3=0;
    scanf("%d%d",&m,&n);
    temp=2;
    while(i<n){
        if(pdprime(temp)==1){
            i++;
            i3++;
        if(i>=m&&i<=n){
            if(i1<9&&i3!=n){
                printf("%d ",temp);
                i1++;
            }
            else{
                printf("%d\n",temp);
                i1=0;
                
            }
        }
        }
         temp++;
        
    }
    return 0;
}

