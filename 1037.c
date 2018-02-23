#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int g,s,k,sg,ss,sk;
    scanf("%d.%d.%d %d.%d.%d",&sg,&ss,&sk,&g,&s,&k);
    ss+=sg*17;
    sk+=ss*29;
    s+=g*17;
    k+=s*29;
    k-=sk;
    s=k/29;
    k=k%29;
    g=s/17;
    s=s%17;
    if(g<0||k<0||s<0){
        printf("%d.%d.%d\n",g,-s,-k);
    }
    else{
        printf("%d.%d.%d\n",g,s,k);
    }
    return 0;
}


