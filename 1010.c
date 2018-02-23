#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int x,z,flag=1;
    while(scanf("%d%d",&x,&z)!=EOF){
        if(z!=0&&x!=0){
            if(flag==1){
                printf("%d %d",x*z,z-1);
                flag=0;
            }
            else{
                printf(" %d %d",x*z,z-1);
            }
        }
        if(flag==1&&z==0){
            printf("0 0");
        }
    }
    return 0;
}
