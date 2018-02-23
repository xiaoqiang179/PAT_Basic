#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int sum=0,countofzero=0,countofone=0;
    char ch;
    while((ch=getchar())!='\n'){
        if(ch>='a'&&ch<='z'){
            sum+=ch-'a'+1;
        }
        if(ch>='A'&&ch<='Z'){
            sum+=ch-'A'+1;
        }
    }
    while(sum!=0){
        if((sum&1)==0){
            countofzero++;
        }
        else{
            countofone++;
        }
        sum=sum>>1;
    }
    printf("%d %d",countofzero,countofone);
    return 0;
}

