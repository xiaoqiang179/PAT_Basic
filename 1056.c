#include <stdio.h>
int main(void){
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            sum=sum+a[j]*10+a[k];
        }
    }
    for(int l=0;l<n;l++){
        sum=sum-a[l]*10-a[l];
    }
    printf("%d",sum);
    return 0;
}
