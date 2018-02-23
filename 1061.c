#include <stdio.h>
int main(void){
    int pep,qus;  //人数 问题数
    scanf("%d %d",&pep,&qus);
    int asw[qus];  //答案
    int as[qus];   //答案分数
    int pepasw[pep][qus]; //每人的答案
    int s[1024]={0};  //每人的分数
    int i1,i2;   //控制循环的变量
    for(i1=0;i1<qus;i1++){
        scanf("%d",&as[i1]);
    }
    for(i1=0;i1<qus;i1++){
        scanf("%d",&asw[i1]);
    }
    for(i1=0;i1<pep;i1++){
        for(i2=0;i2<qus;i2++){
            scanf("%d",&pepasw[i1][i2]);
        }
    }
    for(i1=0;i1<pep;i1++){
        for(i2=0;i2<qus;i2++){
            if(pepasw[i1][i2]==asw[i2]){
                s[i1]=s[i1]+as[i2];
            }
        }
    }
    for (i1=0;i1<pep;i1++) {
        printf("%d\n",s[i1]);
    }
    return 0;
}

