#include <stdio.h>
#include <math.h>
int main() {
    double r1,p1,r2,p2;
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
    a=r1*cos(p1);
    b=r1*sin(p1);
    c=r2*cos(p2);
    d=r2*sin(p2);
    e=a*c-b*d;
    f=b*c+a*d;
    if(fabs(e) < 0.01){
        e = 0;
    }
    if(fabs(f) < 0.01){
       f = 0;
    }
    if(f>=0){
        printf("%.2f+%.2fi",e,f);
    }
    else {
        printf("%.2f-%.2fi",e,f*-1);
    }
    return 0;
}


