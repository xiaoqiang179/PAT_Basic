#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int compare_ints(const void* a, const void* b){
    char arg1 = *(const char*)a;
    char arg2 = *(const char*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
int compare_ints_desc(const void* a, const void* b){
    char arg1 = *(const char*)a;
    char arg2 = *(const char*)b;
    if (arg1 > arg2) return -1;
    if (arg1 < arg2) return 1;
    return 0;
}
int main(){
    char str[5],temp[5];
    int result=0,in,i;
    scanf("%d",&in);
    sprintf(str, "%d",in);
    strcpy(temp, str);
    qsort(str, 4, sizeof(char), compare_ints_desc);
    qsort(temp, 4, sizeof(char), compare_ints);
    if(strcmp(str, temp)==0){
        printf("%s - %s = 0000\n",str,temp);
        return 0;
    }
    memset(str,'0', sizeof(char));
    memset(temp,'0', sizeof(char));
    do{
        sprintf(str, "%d",in);
        for(i=0;i<4;i++){
            if(str[i]<'0'||str[i]>'9'){
                str[i]='0';
            }
        }
        for(i=0;i<4;i++){
            if(temp[i]<'0'||temp[i]>'9'){
                temp[i]='0';
            }
        }
        qsort(str, 4, sizeof(char), compare_ints_desc);
        strcpy(temp, str);
        
        qsort(temp, 4, sizeof(char), compare_ints);
        for(i=0;i<4;i++){
            if(str[i]<'0'||str[i]>'9'){
                str[i]='0';
            }
        }
        for(i=0;i<4;i++){
            if(temp[i]<'0'||temp[i]>'9'){
                temp[i]='0';
            }
        }
        if(strcmp(str, temp)==0){
            printf("%s - %s = 0000\n",str,temp);
            return 0;
        }
        result=atoi(str)-atoi(temp);
        printf("%s - %s = %04d\n",str,temp,result);
        in=result;
        memset(str,'0',sizeof(char));
        memset(temp,'0',sizeof(char));
    }while(result!=6174);
    return 0;
}


