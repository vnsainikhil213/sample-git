#include<stdio.h>
int main()
{
	int n,i;
	printf("\nenter the value of n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		if(i==n)
		break;
	}
}
