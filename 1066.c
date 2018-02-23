#include <stdio.h>
int main() {
    int m,n,a,b,t;
    scanf("%d%d%d%d%d",&m,&n,&a,&b,&t);
    int r[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&r[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(r[i][j]>=a&&r[i][j]<=b){
                r[i][j]=t;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j+1!=n){
            printf("%03d ",r[i][j]);
            }
            else{
                printf("%03d",r[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
