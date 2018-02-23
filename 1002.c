#include <stdio.h>
int main(){
    char ch;
    int sum=0,t,a[6],i=0;
    while((ch=getchar())!='\n'){
        sum=sum+ch-'0';
    }
    
    while(sum>0){
        a[i]=sum%10;
        sum=sum/10;
        i++;
    }
    i--;
    while(i>=0){
        switch(a[i]){
            case 0 : printf("ling"); break;
            case 1 : printf("yi"); break;
            case 2 : printf("er"); break;
            case 3 : printf("san");break;
            case 4 : printf("si");break;
            case 5 : printf("wu");break;
            case 6 : printf("liu");break;
            case 7 : printf("qi");break;
            case 8 : printf("ba");break;
            case 9 : printf("jiu");break;
        }
        if(i!=0){
        printf(" ");
        }
        i--;
    }
    return 0;
}

