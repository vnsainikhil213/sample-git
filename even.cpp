#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("\nenter the n value\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	{
	printf("\n %d\n",i);
	sum=sum+i;
    }
}
    printf("\n sum:\n",sum);
if(sum==n)
{
	printf("\nperfect\n");
}
}
