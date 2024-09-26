#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("enter the n values");
	scanf("%d",&n);
	printf("%d%d",a,b);
	for(i=3;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",c);
	return 0;
}
