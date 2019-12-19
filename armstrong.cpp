#include<stdio.h>
int main()
{
	int n,temp,r=0,sum=0,;
	printf("\nenter the three digit value of n:\n");
	scanf("%d",&n);
	temp=n;
	printf("the sum of cubes is:");
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
		
	}
	printf("%d",sum);
	if(sum==temp)
	{
		printf("\narmstrong\n");
	}
	else
	{
		printf("\nnot armstrong\n");
	}
}
