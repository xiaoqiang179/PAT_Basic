#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int total,time,i,j;
    scanf("%d%d",&total,&time);
    for(i=0;i<time;i++){
        int n1,n2,b,t,flag=1;
        scanf("%d%d%d%d",&n1,&b,&t,&n2);
        if(total<t){
            printf("Not enough tokens.  Total = %d.\n",total);
            continue;
        }
        n2-=n1;
        if(n2>0&&b==0){
            t=-t;
            flag=0;
        }
        if(n2<0&&b==1){
            t=-t;
            flag=0;
        }
        total+=t;
        if(total==0){
            printf("Lose %d.  Total = 0.\n",total-t);
            printf("Game Over.\n");
            return 0;
        }
        else{
            if(flag==1){
                printf("Win %d!  Total = %d.\n",t,total);
            }
            else{
                printf("Lose %d.  Total = %d.\n",-t,total);
            }
        }
    }
    
    return 0;
}


