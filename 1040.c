#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char str[100020];
    int a=0,t=0,i;
    long long sum=0;
    scanf("%s",str);
    for(i=strlen(str)-1;i>-1;i--){
        if(str[i]=='A'){
            a+=t;
        }
        if(str[i]=='T'){
            t++;
        }
        if(str[i]=='P'){
            sum+=a%1000000007;
        }
    }
    printf("%lld",sum%1000000007);
    return 0;
}
