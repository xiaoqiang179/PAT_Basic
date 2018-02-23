#include <stdio.h>
int main() {
    long long c1,c2,sum;
    scanf("%lld%lld",&c1,&c2);
    sum=c2-c1;
    if((c2-c1)%100>40){
        sum=sum/100+1;
    }
    else{
        sum=sum/100;
    }
    printf("%02lld:",sum/3600);
    sum=sum%3600;
    printf("%02lld:",sum/60);
    sum=sum%60;
    printf("%02lld",sum);
    return 0;
}

