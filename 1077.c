#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int process(double a){
    int b=a;
    a-=b;
    if(a>=0.5){
        return b+1;
    }
    else{
        return b;
    }
}
int main(){
    int n,i,j,maxscore;
    scanf("%d%d",&n,&maxscore);
    for(i=0;i<n;i++){
        int studentsc[100]={0},teachersc=0,max=0,min=99999,maxi = 0,mini = 0,t=0;
        double avr=0;
        scanf("%d",&teachersc);
        if(teachersc>maxscore){
            teachersc=0;
        }
        for(j=0;j<n-1;j++){
            scanf("%d",&studentsc[j]);
            if(studentsc[j]>max&&studentsc[j]<=maxscore&&studentsc[j]>=0){
                max=studentsc[j];
                maxi=j;
            }
            if(studentsc[j]<min&&studentsc[j]<=maxscore&&studentsc[j]>=0){
                min=studentsc[j];
                mini=j;
            }
            if(studentsc[j]>maxscore){
                studentsc[j]=-1;
            }
        }
        for(j=0;j<n-1;j++){
            if(j!=maxi&&j!=mini&&studentsc[j]>=0){
                avr+=studentsc[j];
                t++;
            }
        }
        avr/=t;
        printf("%d\n",process((avr+teachersc)/2));
    }
    return 0;
}


