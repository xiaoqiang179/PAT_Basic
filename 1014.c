#include <stdio.h>
#include <string.h>
int main(){
    char a[61],b[61],c[61],d[61];
    int g1,g2,i,l1,l2,l3,l4,day = 0,h = 0,m = 0,flag1=1;
    gets(a);
    gets(b);
    gets(c);
    gets(d);
    l1=(int)strlen(a);
    l2=(int)strlen(b);
    l3=(int)strlen(c);
    l4=(int)strlen(d);
    if(l1>l2){
        g1=l2;
    }
    else{
        g1=l1;
    }
    if(l3>l4){
        g2=l4;
    }
    else{
        g2=l3;
    }
    for(i=0;i<g1;i++){
        if(a[i]==b[i]&&flag1==1&&a[i]>='A'&&a[i]<='G'){
            day=a[i]-'A'+1;
            flag1=0;
            i++;
        }
        if(a[i]==b[i]&&a[i]>='A'&&a[i]<='N'&&flag1==0){
            h=a[i]-'A'+10;
            break;
        }
        if(a[i]==b[i]&&a[i]>='0'&&a[i]<='9'&&flag1==0){
            h=a[i]-'0';
            break;
        }
    }
    for(i=0;i<g2;i++){
        if(c[i]==d[i]&&((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z'))){
            m=i;
            break;
        }
    }
    switch(day){
        case 1:printf("MON");break;
        case 2:printf("TUE");break;
        case 3:printf("WED");break;
        case 4:printf("THU");break;
        case 5:printf("FRI");break;
        case 6:printf("SAT");break;
        case 7:printf("SUN");break;
    }
    printf(" %02d:%02d\n",h,m);
    return 0;
}
