#include <stdio.h>
#include <string.h>
int main(){
    char s[128];
    int start,end,i,j;
    s[0]=' ';
    gets(s+1);
    end=strlen(s);
    for(i=strlen(s)-1;i>=0;i--){
        start=i;
        if(s[i]==' '){
            for(j=start+1;j<end;j++){
                printf("%c",s[j]);
            }
            if(i!=0){
               printf(" ");
            }
            end=start;
        }
    }
    return 0;
}

