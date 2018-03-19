#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct pep{
    char leval;
    double score;
    char name[10];
    int num;
};
struct pep in[150000],out[150000];
int cmp1(const void *p,const void *q){
    struct pep a=*(struct pep*)p;
    struct pep b=*(struct pep*)q;
    if(strcmp(a.name, b.name)>0){
        return 1;
    }
    else if(strcmp(a.name, b.name)<0){
        return -1;
    }
    else{
        return 0;
    }
}
int cmp2(const void *p,const void *q){
    struct pep a=*(struct pep*)p;
    struct pep b=*(struct pep*)q;
    if(a.score>b.score){
        return -1;
    }
    else if(a.score<b.score){
        return 1;
    }
    else{
        if(a.num>b.num){
            return 1;
        }
        else if(a.num<b.num){
            return -1;
        }
        else{
            if(strcmp(a.name, b.name)>1){
                return 1;
            }
            else if(strcmp(a.name, b.name)<1){
                return -1;
            }
            else{
                return 0;
            }
        }
    }
}
int main(){
    int n,i,j,order=1;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        char ch;
        j=0;
        scanf("%c%*c%*c%*c%*c%*c%lf",&in[i].leval,&in[i].score);
        getchar();
        while((ch=getchar())!='\n'){
            if(ch>='A'&&ch<='Z'){
                in[i].name[j]=ch-'A'+'a';
            }
            else{
                in[i].name[j]=ch;
            }
            j++;
        }
    }
    qsort(in, n, sizeof(struct pep), cmp1);
    j=0;
    for(i=0;i<n;i++){
        if(in[i].leval=='A'){
            out[j].score+=in[i].score;
        }
        else if(in[i].leval=='B'){
            out[j].score+=in[i].score/1.5;
        }
        else{
            out[j].score+=in[i].score*1.5;
        }
        out[j].num++;
        strcpy(out[j].name,in[i].name);
        if(strcmp(in[i].name,in[i+1].name)!=0){
            long long temp=out[j].score;
            out[j].score=temp;
            j++;
        }
    }
    qsort(out, j, sizeof(struct pep), cmp2);
    printf("%d\n",j);
    printf("1 %s %.0f %d\n",out[0].name,out[0].score,out[0].num);
    for(i=1;i<j;i++){
        if(out[i].score!=out[i-1].score){
            order=i+1;
        }
        printf("%d %s %.0f %d\n",order,out[i].name,out[i].score,out[i].num);
    }
    return 0;
}


