#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char a[110]={'\0'},b[110]={'\0'};
    scanf("%s %s",a,b);
    int i,emm;
    emm=strlen(b)-strlen(a);
    if(emm<0){
        for(i=strlen(b)-1;i>=0;i--){
            b[i-emm]=b[i];
        }
        for(i=0;i<-emm;i++){
            b[i]='0';
        }
    }
    for(i=1;i<=strlen(a);i++){
        int t1=a[strlen(a)-i]-'0',t2=b[strlen(b)-i]-'0',result=0;
        if(i%2==0){
            if(t2-t1<0){
                result=t2-t1+10;
            }
            else{
                result=t2-t1;
            }
        }
        else{
            result=(t1+t2)%13;
        }
        if(result<10){
            b[strlen(b)-i]=result+'0';
        }
        else{
            if(result==10){
                b[strlen(b)-i]='J';
            }
            if(result==11){
                b[strlen(b)-i]='Q';
            }
            if(result==12){
                b[strlen(b)-i]='K';
            }
        }
    }
    printf("%s",b);
    return 0;
}
