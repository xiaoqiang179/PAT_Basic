#include <stdio.h>
int main(void)
{
    int n;
    int t=0;
    scanf("%d",&n);
    while(n!=1){
    	if(n%2==0){
    		n=n/2;
    		t++;
    	}
    	else{
    		n=3*n+1;
    		n=n/2;
    		t++;
    		}
    }
    printf("%d",t);	
    	
	return 0;
}
