#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int sellupper[26]={0},selllowwer[26]={0},upper[26]={0},lowwer[26]={0},i,sellnum[10]={0},num[10]={0},flag=0,count=0;
    char ch;
    while((ch=getchar())!='\n'){
        if(ch>='A'&&ch<='Z'){
            sellupper[ch-'A']++;
        }
        if(ch>='a'&&ch<='z'){
            selllowwer[ch-'a']++;
        }
        if(ch>='0'&&ch<='9'){
            sellnum[ch-'0']++;
        }
    }
    while((ch=getchar())!='\n'){
        if(ch>='A'&&ch<='Z'){
            upper[ch-'A']++;
        }
        if(ch>='a'&&ch<='z'){
            lowwer[ch-'a']++;
        }
        if(ch>='0'&&ch<='9'){
            num[ch-'0']++;
        }
    }
    for(i=0;i<26;i++){
        sellupper[i]-=upper[i];
        selllowwer[i]-=lowwer[i];
        if(selllowwer[i]<0||sellupper<0){
            flag=1;
        }
    }
    for(i=0;i<10;i++){
        sellnum[i]-=num[i];
        if(sellnum[i]<0){
            flag=1;
        }
    }
    if(flag==1){
        printf("No ");
        for(i=0;i<26;i++){
            if(selllowwer[i]<0){
                count+=selllowwer[i];
            }
        }
        for(i=0;i<26;i++){
            if(sellupper[i]<0){
                count+=sellupper[i];
            }
        }
        for(i=0;i<10;i++){
            if(sellnum[i]<0){
                count+=sellnum[i];
            }
        }
        printf("%d",-count);
    }
    else{
        printf("Yes ");
        for(i=0;i<26;i++){
            count+=selllowwer[i];
        }
        for(i=0;i<26;i++){
            count+=sellupper[i];
        }
        for(i=0;i<10;i++){
            count+=sellnum[i];
        }
        printf("%d",count);
    }
    return 0;
}


