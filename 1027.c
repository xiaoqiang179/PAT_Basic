#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int cal(int n){
    return pow(n, 2)*2-1;
}
void print(int n,char ch){
    int i,j,k;
    for(i=1-n;i<=n-1;i++){
        for(k=0;k<n-abs(i)-1;k++){
            printf(" ");
        }
        for(j=0;j<2*abs(i)+1;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main(){
    int n;
    char ch;
    scanf("%d %c",&n,&ch);
    int i;
    for(i=0;i<1001;i++){
        if(cal(i)>n){
            break;
        }
    }
    print(i-1,ch);
    printf("%d",n-cal(i-1));
    return 0;
}


