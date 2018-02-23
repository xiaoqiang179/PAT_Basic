#include <stdio.h>
int main(void)
{
    int a,b,c,n;
    int d=1;
    scanf("%d",&n);
    a=n/100;
    while(a!=0)
    {
    	printf("B");
    	a--;
    }
    b=n;
    while(b>=100)
    {
    	b=b-100;
    }
    b=b/10;
    while(b!=0)
    {
    	printf("S");
    	b--;
    }
    c=n%10;
    while(d<=c)
    {
    	printf("%d",d);
    	d++;
    }
	return 0;
}
