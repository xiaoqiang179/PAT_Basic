#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int n,i,j,q[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},flag=1,flag1=1;
    char idt[19],m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int z=0;
        scanf("%s",idt);
        for(j=0;j<17;j++){
            if(idt[j]<'0'||idt[j]>'9'){
                flag1=0;
                break;
            }
            z+=(idt[j]-'0')*q[j];
        }
        z=z%11;
        if(m[z]!=idt[17]||flag1==0){
            printf("%s\n",idt);
            flag=0;
        }
        if(flag1==0){
            flag1=1;
        }
    }
    if(flag==1){
        printf("All passed\n");
    }
    return 0;
}


