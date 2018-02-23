#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
struct product{
    double number;
    double totalprize;
    double singleprize;
};
int cmp(const void* p,const void* q){
    struct product a=*(struct product*)p;
    struct product b=*(struct product*)q;
    if(a.singleprize>b.singleprize){
        return -1;
    }
    else if(a.singleprize<b.singleprize){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n,require;
    struct product arr[1000];
    double total=0;
    scanf("%d%d",&n,&require);
    int i;
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i].number);
    }
    for(i=0;i<n;i++){
        scanf("%lf",&arr[i].totalprize);
    }
    for(i=0;i<n;i++){
        arr[i].singleprize=arr[i].totalprize/arr[i].number;
    }
    qsort(arr, n, sizeof(struct product), cmp);
    i=0;
    while(require!=0){
        if(i==n){
            break;
        }
        if(arr[i].number<=require){
            require-=arr[i].number;
            total+=arr[i].totalprize;
        }
        else{
            total+=require*arr[i].singleprize;
            require=0;
        }
        i++;
    }
    printf("%.2f",total);
    return 0;
}


