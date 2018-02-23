#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
bool check(char *p){
    int i,flag=0,fu=0,zheng=0,j,ok=0;
    if(strlen(p)>7){
        return false;
    }
    for(i=0;i<strlen(p);i++){
        if(!((p[i]>='0'&&p[i]<='9')||(p[i]=='.')||(p[i]=='+')||(p[i]=='-'))){
            return false;
        }
        if(p[i]=='.'&&flag==1){
            return false;
        }
        if(p[i]=='.'){
            for(j=i;j>=0;j--){
                if(p[j]>='0'&&p[j]<='9'){
                    ok=1;
                }
            }
            if(ok==0){
                return false;
            }
            if(strlen(p)-i-1>2){
                return false;
            }
            flag=1;
        }
        if(p[i]=='-'||p[i]=='+'){
            if(p[i]=='-'){
                fu++;
            }
            else{
                zheng++;
            }
            if(i!=0){
                return false;
            }
        }
    }
    if(fu>1){
        return false;
    }
    if(zheng>1){
        return true;
    }
    return true;
}
int main(){
    int n,i,count=0;
    double avr=0;
    char str[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str);
        if(check(str)==true){
            if(atof(str)<=1000&&atof(str)>=-1000){
                avr+=atof(str);
                count++;
            }
            else{
                printf("ERROR: %s is not a legal number\n",str);
            }
        }
        else{
            printf("ERROR: %s is not a legal number\n",str);
        }
    }
    if(count==0){
        printf("The average of 0 numbers is Undefined\n");
    }
    else if(count==1){
        printf("The average of %d number is %.2f\n",count,avr/count);
    }
    else{
        printf("The average of %d numbers is %.2f\n",count,avr/count);
    }
    return 0;
}

