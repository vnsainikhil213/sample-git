#include<stdio.h>
int main()
{
	int fact,n,sum=0,temp,r;
	printf("\n enter the value of n:\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
	for(int i=1;i<=r;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial of %d is:%d \n",r,fact);
	sum=sum+fact;
	n=n/10;
}
if(sum==temp)
{
	printf("\nstrong\n");
}
else
{
	printf("not strong");
}
}
