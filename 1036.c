#include<stdio.h>
int main(){
    int n,h;
    char ch;
    scanf("%d %c",&n,&ch);
    h=n*10;
    if(h/2%10>4){
        h=n/2+1;
    }
    else{
        h=n/2;
    }
    for(int i=1;i<=n;i++){
        printf("%c",ch);
    }
    printf("\n");
    for(int i=1;i<=h-2;i++){
        printf("%c",ch);
        for(int j=1;j<=n-2;j++){
            printf(" ");
        }
        printf("%c",ch);
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        printf("%c",ch);
    }
    return 0;
}

