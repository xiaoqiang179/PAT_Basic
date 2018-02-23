#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
bool pd1(int n,int m){
    int i;
    for(i=2;i<=n;i++){
        if(n%i==0&&m%i==0){
            return false;
        }
    }
    return true;
}
bool pd2(double a){
    int b=a;
    a-=b;
    if(a>0){
        return false;
    }
    else{
        return true;
    }
}
void swap(double *a1,double *a2){
    double temp=*a1;
    *a1=*a2;
    *a2=temp;
}
int main(){
    int n1,n2,m1,m2,k,i,flag=0;
    scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
    double r1=(double)n1*k/m1,r2=(double)n2*k/m2;
    if(r1>r2){
        swap(&r1, &r2);
    }
    int start=r1+1,end;
    if(pd2(r2)==true){
        end=r2;
    }
    else{
        end=r2+1;
    }
    for(i=start;i<end;i++){
        if(pd1(i,k)==true&&flag==0){
            printf("%d/%d",i,k);
            flag=1;
        }
        else if(pd1(i,k)==true){
            printf(" %d/%d",i,k);
        }
    }
    return 0;
}


