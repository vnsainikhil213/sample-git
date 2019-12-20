#include<stdio.h>
int main()
{
	int n,i,j;
	printf("\nenter the value of n:\n");
	scanf("%d",&n);
	for(i=1,j=n;i<=n,j>0;i++,j--)
	{
		printf("\n%d \t %d",i,j);
	}
}
