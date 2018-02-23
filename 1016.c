#include <stdio.h>
#include<math.h>
long long s1(int n){
    long long sum=0;
    int i=0;
    while(i<n){
        sum=sum+pow(10, i);
        i++;
    }
    return sum;
}
int main() {
    int a,b,i1=0,i2=0;
    long long c,d,sum;
    scanf("%lld%d%lld%d",&c,&a,&d,&b);
    while(c>0){
        if(c%10==a){
            i1++;
        }
        c=c/10;
    }
    while(d>0){
        if(d%10==b){
            i2++;
        }
        d=d/10;
    }
    printf("%lld",s1(i1)*a+s1(i2)*b);
    return 0;
}
