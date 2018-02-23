#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char in;
    int upper[26]={0},max=0,maxi,i;
    while((in=getchar())!='\n'){
        if(in>='A'&&in<='Z'){
            upper[in-'A']++;
        }
        if(in>='a'&&in<='z'){
            upper[in-'a']++;
        }
    }
    for(i=0;i<26;i++){
        if(upper[i]>max){
            max=upper[i];
            maxi=i;
        }
    }
    printf("%c %d",maxi+'a',max);
    return 0;
}


