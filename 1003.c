#include <stdio.h>
#include <string.h>
int pdd(char *str){
    int j,p=0,a=0,t=0;
    if(strstr(str, "PT")!=0){
        return 0;
    }
    for(j=0;j<strlen(str);j++){
        if(!(str[j]=='P'||str[j]=='A'||str[j]=='T')){
            return 0;
        }
        if(str[j]=='P'&&p==0){
            p++;
        }
        if(str[j]=='A'&&a==0){
            a++;
        }
        if(str[j]=='T'&&t==0&&p!=0){
            t++;
        }
    }
    if((a=!p||a!=t||t!=p)){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    char str[10][101]={'\0'};
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    for(i=0;i<n;i++){
        int count1=0,count2=0,count3=0,flag=0,flag2=0;
        for(j=0;j<strlen(str[i]);j++){
            if(pdd(str[i])==0&&j==0){
                printf("NO\n");
                flag2=1;
                break;
            }
            if(str[i][j]=='P'){
                flag++;
            }
            else if(str[i][j]=='T'){
                flag++;
            }
            else{
            if(flag==0){
                count1++;
            }
            if(flag==1){
                count2++;
            }
            if(flag==2){
                count3++;
            }
            }
            }
            if(count1*count2==count3&&flag2==0){
                printf("YES\n");
            }
            else if(count1*count2!=count3&&flag2==0){
                printf("NO\n");
            }
        }
    return 0;
}

