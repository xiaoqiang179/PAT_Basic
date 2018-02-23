#include <stdio.h>
int main(void){
    int n;
    int a=0,b=0,i;
    scanf("%d",&n);
    int j[n][4];
    for(i=0;i<=n-1;i++){
        scanf("%d %d %d %d",&j[i][0],&j[i][1],&j[i][2],&j[i][3]);
    }
    for(i=0;i<=n;i++){
       
        if(j[i][0]+j[i][2]==j[i][1]&&j[i][3]!=j[i][1]){
            b++;
        }
        else if(j[i][0]+j[i][2]==j[i][3]&&j[i][3]!=j[i][1]){
            a++;
        }
        else if(j[i][0]+j[i][2]==j[i][3]==j[i][1]){
            continue;
        }
        else if(j[i][0]+j[i][2]==j[i][3]+j[i][1]){
            continue;
        }
        
        else{
            continue;
        }
    }
    printf("%d %d",a,b);
    return 0;
}
