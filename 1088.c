#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int me,x,y;
    scanf("%d%d%d",&me,&x,&y);
    int a,b = 0,flag=0;
    for(a=9;a>=1;a--){
        for(b=9;b>=0;b--){
            if(((double)abs(a*10+b-b*10-a)/(double)x==(double)(b*10+a)/(double)y)){
                flag=1;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        int jia=a*10+b,yi=b*10+a;
        double ding=(double)yi/(double)y;
        int arr[4]={jia,yi};
        printf("%d",jia);
        for(int i=0;i<2;i++){
            if(arr[i]>me){
                printf(" Cong");
            }
            else if(arr[i]==me){
                printf(" Ping");
            }
            else{
                printf(" Gai");
            }
        }
        if(ding>me){
            printf(" Cong");
        }
        else if(ding==me){
            printf(" Ping");
        }
        else{
            printf(" Gai");
        }
        printf("\n");
    }
    else{
        printf("No Solution\n");
    }
    return 0;
}

