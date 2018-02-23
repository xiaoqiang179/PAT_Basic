#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int n,i;
    double arr[100000],sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf",&arr[i]);
    }
    for(i=1;i<=n;i++){
        sum+=arr[i]*(n+1-i)*i;
    }
    printf("%.2f",sum);
    return 0;
}
