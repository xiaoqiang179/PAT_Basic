#include<stdio.h>
int main (void){
    char ch;
    int a[10]={0},i;
    while((ch=getchar())!='\n'){
        a[ch-48]++;
    }
    for(i=0;i<=9;i++){
        if(a[i]!=0){
            printf("%d:%d\n",i,a[i]);
        }
    }
    return 0;
}

