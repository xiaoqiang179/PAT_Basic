#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
bool pdhw(char *p){
    int i,len=strlen(p),middle=len/2;
    for(i=0;i<middle;i++){
        if(p[i]!=p[len-i-1]){
            return false;
        }
    }
    return true;
}
bool add(char *p,char *q,char *result){
    int i,temp;
    for(i=strlen(p)-1;i>=0;i--){
        temp=(p[i]-'0')+(q[i]-'0');
        if(temp+result[i+1]>=10){
            temp-=10;
            result[i+1]=result[i+1]+temp+'0';
            result[i]=1;
        }
        else{
            result[i+1]=result[i+1]+temp+'0';
        }
    }
    result[0]+='0';
    if(result[0]!='0'){
        return true;
    }
    else{
        return false;
    }
}
void reverse(char *p,char *q){
    int i,len=strlen(p);
    for(i=0;i<len;i++){
        q[len-i-1]=p[i];
    }
}
int main(){
    char str[1020]={'\0'},temp1[1020]={'\0'},temp2[1020]={'\0'};
    scanf("%s",str);
    if(strlen(str)==1&&str[0]=='0'){
        printf("%s is a palindromic number.\n",str);
        return 0;
    }
    if(pdhw(str)==true){
        printf("%s is a palindromic number.\n",str);
        return 0;
    }
    int i;
    for(i=0;i<10;i++){
        bool flag;
        reverse(str, temp1);
        flag=add(str, temp1, temp2);
        if(flag==true){
            if(pdhw(temp2)==true){
                printf("%s + %s = %s\n",str,temp1,temp2);
                printf("%s is a palindromic number.\n",temp2);
                return 0;
            }
            else{
                printf("%s + %s = %s\n",str,temp1,temp2);
            }
            memset(str, '\0', 1020);
            strcpy(str, temp2);
            memset(temp2, '\0', 1020);
        }
        else{
            if(pdhw(temp2+1)==true){
                printf("%s + %s = %s\n",str,temp1,temp2+1);
                printf("%s is a palindromic number.\n",temp2+1);
                return 0;
            }
            else{
                printf("%s + %s = %s\n",str,temp1,temp2+1);
            }
            memset(str, '\0', 1020);
            strcpy(str, temp2+1);
            memset(temp2, '\0', 1020);
        }
    }
    printf("Not found in 10 iterations.\n");
    return 0;
}


