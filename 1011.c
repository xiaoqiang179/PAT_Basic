#include <stdio.h>
int main(void) {
    int n,i;
    scanf("%d",&n);
    double a[n][3];
      for(i=0;i<n;i++){
        scanf("%lf %lf %lf",&a[i][0],&a[i][1],&a[i][2]);
    }
    for(i=0;i<n;i++){
        if(a[i][0]+a[i][1]>a[i][2]){
            printf("Case #%d: true\n",i+1);
        }
        else{
            printf("Case #%d: false\n",i+1);
        }
    }
    return 0;
}

