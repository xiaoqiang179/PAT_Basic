#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
double process(double a){
    int b=a*1000;
    double back;
    if(b%10>=5){
        b+=10;
        b=b/10;
        back=b/100.0;
    }
    else{
        b=b/10;
        back=b/100.0;
    }
    return back;
}
int main(){
    int n,i;
    double result,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        result=sqrt(a*a+b*b);
        result=process(result);
        if(result>max){
            max=result;
        }
    }
    printf("%.2f",max);
    return 0;
}


