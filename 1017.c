#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int convert(char *p){
    int a;
    a=(p[0]-'0')*10+p[1]-'0';
    return a;
}
int main(){
    char a[1001];
    int i,y,b;
    scanf("%s%d",a,&b);
    if(strlen(a)==1){
        printf("%d ",(a[0]-'0')/b);
        printf("%d",(a[0]-'0')%b);
        return 0;
    }
    y=(a[0]-'0');
    for(i=1;i<strlen(a);i++){
        printf("%d",(y*10+(a[i]-'0'))/b);
        y=(y*10+(a[i]-'0'))%b;
    }
    printf(" %d",y);
    return 0;
}
