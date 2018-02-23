#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct nums{
    long long z;
    long long m;
    long long c;
    int sign;
};
void output(long long z,long long m,long long c,int sign){
    if(sign==0){
        if(z==0){
            printf("0");
        }
        else if(m==0){
            printf("Inf");
        }
        return;
    }
    else{
        if(z==m){
            printf("1");
        }
        else if(z+m==0){
            printf("(-1)");
        }
        else if(z==0&&m==1){
            if(c<0){
                printf("(%lld)",c);
            }
            else{
                printf("%lld",c);
            }
        }
        else if(m==1&&z!=0){
            if(z<0){
                printf("(%lld)",z);
            }
            else{
                printf("%lld",z);
            }
        }
        else if(sign<0){
            if(c==0){
                printf("(-%lld/%lld)",llabs(z),llabs(m));
            }
            else{
                printf("(-%lld %lld/%lld)",llabs(c),llabs(z),llabs(m));
            }
        }
        else{
            if(c==0){
                printf("%lld/%lld",llabs(z),llabs(m));
            }
            else{
                printf("%lld %lld/%lld",llabs(c),llabs(z),llabs(m));
            }
        }
    }
}
long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}
void process(struct nums *p){
    if(p->z==0||p->m==0||p->z==p->m||p->z==1||p->m==1){
        return;
    }
    if(p->m<0){
        p->z=-p->z;
        p->m=-p->m;
    }
    if(llabs(p->z)>llabs(p->m)){
        p->c=p->z/p->m;
        p->z=p->z%p->m;
        if(p->z<0){
            p->z=-p->z;
        }
    }
    long long ttt=llabs(gcd(p->z, p->m));
    p->z/=ttt;
    p->m/=ttt;
}
int main(){
    struct nums in1={0},in2={0},r1={0},r2={0},r3={0},r4={0};
    scanf("%lld/%lld %lld/%lld",&in1.z,&in1.m,&in2.z,&in2.m);
    if((in1.z<0&&in1.m>0)||(in1.z>0&&in1.m<0)){
        in1.sign=-1;
    }
    else if((in1.z<0&&in1.m<0)||(in1.z>0&&in1.m>0)){
        in1.sign=1;
    }
    else{
        in1.sign=0;
    }
    if((in2.z<0&&in2.m>0)||(in2.z>0&&in2.m<0)){
        in2.sign=-1;
    }
    else if((in2.z<0&&in2.m<0)||(in2.z>0&&in2.m>0)){
        in2.sign=1;
    }
    else{
        in2.sign=0;
    }
    r1.z=in1.z*in2.m+in1.m*in2.z;
    r1.m=in1.m*in2.m;
    if((r1.z<0&&r1.m>0)||(r1.z>0&&r1.m<0)){
        r1.sign=-1;
    }
    else if((r1.z<0&&r1.m<0)||(r1.z>0&&r1.m>0)){
        r1.sign=1;
    }
    else{
        r1.sign=0;
    }
    process(&r1);
    r2.z=in1.z*in2.m-in1.m*in2.z;
    r2.m=in1.m*in2.m;
    if((r2.z<0&&r2.m>0)||(r2.z>0&&r2.m<0)){
        r2.sign=-1;
    }
    else if((r2.z<0&&r2.m<0)||(r2.z>0&&r2.m>0)){
        r2.sign=1;
    }
    else{
        r2.sign=0;
    }
    process(&r2);
    r3.z=in1.z*in2.z;
    r3.m=in1.m*in2.m;
    if((r3.z<0&&r3.m>0)||(r3.z>0&&r3.m<0)){
        r3.sign=-1;
    }
    else if((r3.z<0&&r3.m<0)||(r3.z>0&&r3.m>0)){
        r3.sign=1;
    }
    else{
        r3.sign=0;
    }
    process(&r3);
    r4.z=in1.z*in2.m;
    r4.m=in1.m*in2.z;
    if((r4.z<0&&r4.m>0)||(r4.z>0&&r4.m<0)){
        r4.sign=-1;
    }
    else if((r4.z<0&&r4.m<0)||(r4.z>0&&r4.m>0)){
        r4.sign=1;
    }
    else{
        r4.sign=0;
    }
    process(&r4);
    process(&in1);
    process(&in2);
    output(in1.z, in1.m, in1.c,in1.sign);
    printf(" + ");
    output(in2.z, in2.m, in2.c,in2.sign);
    printf(" = ");
    output(r1.z, r1.m, r1.c,r1.sign);
    printf("\n");
    output(in1.z, in1.m, in1.c,in1.sign);
    printf(" - ");
    output(in2.z, in2.m, in2.c,in2.sign);
    printf(" = ");
    output(r2.z, r2.m, r2.c,r2.sign);
    printf("\n");
    output(in1.z, in1.m, in1.c,in1.sign);
    printf(" * ");
    output(in2.z, in2.m, in2.c,in2.sign);
    printf(" = ");
    output(r3.z, r3.m, r3.c,r3.sign);
    printf("\n");
    output(in1.z, in1.m, in1.c,in1.sign);
    printf(" / ");
    output(in2.z, in2.m, in2.c,in2.sign);
    printf(" = ");
    output(r4.z, r4.m, r4.c,r4.sign);
    printf("\n");
    return 0;
}
