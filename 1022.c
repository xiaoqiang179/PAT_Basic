#include <stdio.h>
void convert(long long a,int c){
    if(a/c!=0)
    convert(a/c,c);
    printf("%lld",a%c);
    return;
}
int main(){
    long long a,b;
    int c;
    scanf("%lld%lld%d",&a,&b,&c);
    a+=b;
    convert(a,c);
    return 0;
}
