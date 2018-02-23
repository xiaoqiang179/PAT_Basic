#include <stdio.h>
int main(){
    int n,m,i,i1;
    scanf("%d%d",&n,&m);
    while(m>n){
        m=m-n;
    }
    int a[100];
    int temp1[m];
    int temp2[n-m];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i1=n-m;
    for(i=0;i<m;i++){
            temp1[i]=a[i1];     //后m到temp1
            i1++;
    }
    for(i=0;i<n-m;i++){
            temp2[i]=a[i];       //前n-m位到temp2
    }
    i1=m;
        for(i=0;i<n-m;i++){
            a[i1]=temp2[i];
            i1++;
        }
        for(i=0;i<m;i++){
            a[i]=temp1[i];
        }
        for(i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
        printf("%d",a[i]);
    return 0;
}



