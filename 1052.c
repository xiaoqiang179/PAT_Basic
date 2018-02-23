#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char hand[100][100]={'\0'},eye[100][100]={'\0'},mouth[100][100]={'\0'},ch,ch2;
    int counthand=0,counteye=0,countmouth=0,n,i=0,j=0,count[5],out[5]={0},flag=0;
    while((ch=getchar())!='\n'){
        if(ch=='['){
            counthand++;
            while((ch2=getchar())!=']'){
                hand[i][j]=ch2;
                j++;
            }
            i++;
        }
        j=0;
    }
    i=0;
    while((ch=getchar())!='\n'){
        if(ch=='['){
            counteye++;
            while((ch2=getchar())!=']'){
                eye[i][j]=ch2;
                j++;
            }
            i++;
        }
        j=0;
    }
    i=0;
    while((ch=getchar())!='\n'){
        if(ch=='['){
            countmouth++;
            while((ch2=getchar())!=']'){
                mouth[i][j]=ch2;
                j++;
            }
            i++;
        }
        j=0;
    }
    scanf("%d",&n);
    count[0]=count[4]=counthand;
    count[1]=count[3]=counteye;
    count[2]=countmouth;
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            scanf("%d",&out[j]);
            if(out[j]>count[j]||out[j]<1){
                flag=1;
            }
        }
        if(flag==0){
            printf("%s(",hand[out[0]-1]);
            printf("%s",eye[out[1]-1]);
            printf("%s",mouth[out[2]-1]);
            printf("%s",eye[out[3]-1]);
            printf(")%s\n",hand[out[4]-1]);
        }
        else{
            printf("Are you kidding me? @\\/@\n");
            flag=0;
        }
        memset(out, 0, 5*sizeof(int));
    }
    return 0;
}
