#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int n,jiawin=0,jialoss=0,jiaping=0,yiwin=0,yiloss=0,yiping=0,jiar[3]={0},yir[3]={0},i,maxjia=0,maxyi=0,maxjiai=0,maxyii=0;  //jiar[0]='B' [1]='C' [2]='J'
    char jia,yi;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        scanf("%c %c",&jia,&yi);
        if(jia==yi){
            jiaping++;
            yiping++;
        }
        else if(jia=='C'&&yi=='J'){
            jiawin++;
            yiloss++;
            jiar[1]++;
        }
        else if(jia=='C'&&yi=='B'){
            jialoss++;
            yiwin++;
            yir[0]++;
        }
        else if(jia=='J'&&yi=='C'){
            jialoss++;
            yiwin++;
            yir[1]++;
        }
        else if(jia=='J'&&yi=='B'){
            jiawin++;
            yiloss++;
            jiar[2]++;
        }
        else if(jia=='B'&&yi=='C'){
            jiawin++;
            yiloss++;
            jiar[0]++;
        }
        else if(jia=='B'&&yi=='J'){
            jialoss++;
            yiwin++;
            yir[2]++;
        }
        getchar();
    }
    for(i=0;i<3;i++){
        if(jiar[i]>maxjia){
            maxjia=jiar[i];
            maxjiai=i;
        }
    }
    for(i=0;i<3;i++){
        if(yir[i]>maxyi){
            maxyi=yir[i];
            maxyii=i;
        }
    }
    printf("%d %d %d\n",jiawin,jiaping,jialoss);
    printf("%d %d %d\n",yiwin,yiping,yiloss);
    if(maxjiai==0){
        printf("B ");
    }
    else if(maxjiai==1){
        printf("C ");
    }
    else{
        printf("J ");
    }
    if(maxyii==0){
        printf("B");
    }
    else if(maxyii==1){
        printf("C");
    }
    else{
        printf("J");
    }
    return 0;
}

