#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void reverse(int *p,int len){
    int i,t;
    for(i=0;i<len/2;i++){
        t=p[i];
        p[i]=p[len-i-1];
        p[len-i-1]=t;
    }
}
void trim(int *p,int *len){
    int i;
    for(i=(*len)-1;i>=0;i--){
        if(p[i]!=0){
            *len=i+1;
            return;
        }
    }
}
int main(){
    int data[30]={0},num1[30]={0},num2[30]={0},i=0,len1,len2,len3,len,res[30]={0},j,flag=0;
    char ch;
    while((ch=getchar())!='\n'){
        data[i++]=ch-'0';
    }
    len1=i;
    i=0;
    while((ch=getchar())!='\n'){
        num1[i++]=ch-'0';
    }
    len2=i;
    i=0;
    while((ch=getchar())!='\n'){
        num2[i++]=ch-'0';
    }
    len3=i;
    reverse(data, len1);
    reverse(num1, len2);
    reverse(num2, len3);
    trim(num1, &len2);
    trim(num2, &len3);
    len=len2<len3? len3:len2;
    for(i=0;i<len;i++){
        int temp=num1[i]+num2[i]+res[i];
        if(data[i]==0){
            if(temp>=10){
                res[i+1]=temp/10;
                res[i]=temp%10;
            }
            else{
                res[i]=temp;
            }
        }
        else{
            if(temp>=data[i]){
                res[i+1]=temp/data[i];
                res[i]=temp%data[i];
            }
            else{
                res[i]=temp;
            }
        }
    }
    if(res[len]!=0){
        for(i=len;res[i]!=0;i++){
            if(res[i]>=data[i]&&data[i]!=0){
                res[i+1]=res[i]/data[i];
                res[i]=res[i]%data[i];
            }
            else{
                res[i]=res[i];
            }
        }
        len=i;
    }
    for(i=0;i<len;i++){
        if(res[i]!=0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("0");
    }
    else{
        for(i=len-1;i>=0;i--){
            printf("%d",res[i]);
        }
    }
    return 0;
}

