#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct student{
    int id;
    int d;
    int c;
    int sum;
};
int cmp(const void *p,const void *q){
    struct student t1=*(const struct student*)p;
    struct student t2=*(const struct student*)q;
    if(t1.sum>t2.sum){
        return -1;
    }
    else if(t1.sum<t2.sum){
        return 1;
    }
    else{
        if(t1.d>t2.d){
            return -1;
        }
        else if(t1.d<t2.d){
            return 1;
        }
        else{
            if(t1.id>t2.id){
                return 1;
            }
            else if(t1.id<t2.id){
                return -1;
            }
            else{
                return 0;
            }
        }
    }
}
int main(){
    int n,l,h,i,i1=0,i2=0,i3=0,i4=0;
    struct student first[100000],second[100000],third[100000],forth[100000];
    int temp1,temp2,temp3;
    scanf("%d %d %d",&n,&l,&h);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&temp1,&temp2,&temp3);
        if(temp2>=l&&temp3>=l){
            if(temp2>=h&&temp3>=h){
                first[i1].id=temp1;
                first[i1].d=temp2;
                first[i1].c=temp3;
                first[i1].sum=temp2+temp3;
                i1++;
            }
            else if(temp2>=h&&temp3<h){
                second[i2].id=temp1;
                second[i2].d=temp2;
                second[i2].c=temp3;
                second[i2].sum=temp2+temp3;
                i2++;
            }
            else if(temp2>=temp3&&temp2<h){
                third[i3].id=temp1;
                third[i3].d=temp2;
                third[i3].c=temp3;
                third[i3].sum=temp2+temp3;
                i3++;
            }
            else{
                forth[i4].id=temp1;
                forth[i4].d=temp2;
                forth[i4].c=temp3;
                forth[i4].sum=temp2+temp3;
                i4++;
            }
        }
    }
    qsort(first, i1, sizeof(struct student), cmp);
    qsort(second, i2, sizeof(struct student), cmp);
    qsort(third, i3, sizeof(struct student), cmp);
    qsort(forth, i4, sizeof(struct student), cmp);
    printf("%d\n",i1+i2+i3+i4);
    for(i=0;i<i1;i++){
        printf("%d %d %d\n",first[i].id,first[i].d,first[i].c);
    }
    for(i=0;i<i2;i++){
        printf("%d %d %d\n",second[i].id,second[i].d,second[i].c);
    }
    for(i=0;i<i3;i++){
        printf("%d %d %d\n",third[i].id,third[i].d,third[i].c);
    }
    for(i=0;i<i4;i++){
        printf("%d %d %d\n",forth[i].id,forth[i].d,forth[i].c);
    }
    return 0;
}


