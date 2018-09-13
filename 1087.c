#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int arr[15000]={0},count=0,i;
	for(i=1;i<=n;i++){
		int temp=(int)i/2;
		temp+=(int)i/3;
		temp+=(int)i/5;
		arr[temp]=1;
	}
	for(i=1;i<=15000;i++){
		if(arr[i]!=0){
			count++;
		}
	}
	printf("%d\n",count);
}
