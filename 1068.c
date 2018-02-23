#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int n,m,tol,i,j,k,try[8][2]={{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}},flag=1,x = 0,y = 0,flag2=0,founded=0,i1,j_1;
double arr[1000][1000]={0},color = 0.0;
int test(int x,int y){
    for(i1=0;i1<n;i1++){
        for(j_1=0;j_1<m;j_1++){
            if(arr[y][x]==arr[i1][j_1]&&i1!=y&&j_1!=x){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    scanf("%d%d%d",&m,&n,&tol);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<8;k++){
                if(i+try[k][0]>=0&&i+try[k][0]<n&&j+try[k][1]>=0&&j+try[k][1]<m){
                    if(fabs(arr[i+try[k][0]][j+try[k][1]]-arr[i][j])<=tol){
                        flag=0;
                        break;
                    }
                }
            }
            if(flag2==1&&flag==1&&test(j,i)==1){
                printf("Not Unique\n");
                return 0;
            }
            if(flag==1){
                if(test(j, i)==1){
                    color=arr[i][j];
                    x=j;
                    y=i;
                    flag2=1;
                    founded=1;
                }
            }
            else{
                flag=1;
            }
        }
    }
    if(founded==1){
        printf("(%d, %d): %.0f\n",x+1,y+1,color);
    }
    else{
        printf("Not Exist\n");
    }
    return 0;
}

