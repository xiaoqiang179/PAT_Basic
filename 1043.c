#include <stdio.h>
#include <string.h>
int main(){
    char str[10000];
    int P=0,A=0,T=0,e=0,s=0,t=0,sum=0;
    int i,j=0;
    gets(str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='P'){
            P++;
            sum++;
        }
        if(str[i]=='A'){
            A++;
            sum++;
        }
        if(str[i]=='T'){
            T++;
            sum++;
        }
        if(str[i]=='e'){
            e++;
            sum++;
        }
        if(str[i]=='s'){
            s++;
            sum++;
        }
        if(str[i]=='t'){
            t++;
            sum++;
        }
    }
    for(i=0;i<sum;i++){
        if(P!=0){
            printf("P");
            P--;
        }
        if(A!=0){
             printf("A");
            A--;
        }
        if(T!=0){
             printf("T");
            T--;
        }
        if(e!=0){
             printf("e");
            e--;
        }
        if(s!=0){
             printf("s");
            s--;
        }
        if(t!=0){
             printf("t");
            t--;
        }
    }
    return 0;
}

