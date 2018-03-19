#include <stdio.h>
#include <string.h>
int main(){
    int i,n,j,k,count=0;
    char d,str[50][100000]={'\0'};
    scanf("%c%d",&d,&n);
    if(n==1){
        printf("%c\n",d);
    }
    else{
        str[1][0]=d;
        str[1][1]='1';
        for(i=2;i<=n-1;i++){
            k=0;
            for(j=0;j<strlen(str[i-1]);j++){
                count++;
                if(str[i-1][j]!=str[i-1][j+1]){
                    str[i][k]=str[i-1][j];
                    k++;
                    str[i][k]=count+'0';
                    k++;
                    count=0;
                }
            }
        }
        printf("%s\n",str[i-1]);
    }
    return 0;
}

