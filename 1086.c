#include <stdio.h>

int main(int argc, char *argv[]) {
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long sum=a*b;
	if(sum==0){
		printf("0");
		return 0;
	}
	int arr[100]={0};
	int idx=0,i;
	while(sum>0){
		arr[idx++]=sum%10;
		sum/=10;
	}
	for(i=0;i<idx;i++){
		if(arr[i]!=0){
			break;
		}
	}
	for(;i<idx;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
