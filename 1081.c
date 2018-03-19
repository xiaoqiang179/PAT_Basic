#include <stdio.h>
#include <string.h>
int main(){
	int i,n;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		char str[1000];
		int flagnum=0,flagala=0,j,flag=0,flagpo=0;
		gets(str);
		if(strlen(str)<6){
			printf("Your password is tai duan le.\n");
			continue;
		}
		for(j=0;j<strlen(str);j++){
			if(!((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]=='.')||(str[j]>='0'&&str[j]<='9'))){
				printf("Your password is tai luan le.\n");
				flag=1;
				break;
			}
			if(str[j]>='0'&&str[j]<='9'){
				flagnum=1;
			}
			if((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')){
				flagala=1;
			}
			if(str[j]=='.'){
				flagpo=1;
			}
		}
		if(flag==0){
			if(flagnum==1&&flagala==1){
				printf("Your password is wan mei.\n");
			}
			else if(flagnum==1&&flagala==0){
				printf("Your password needs zi mu.\n");
			}
			else if(flagnum==0&&flagala==1){
				printf("Your password needs shu zi.\n");
			}
			else{
				
			}
		}
	}
	return 0;
}

