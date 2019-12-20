#include<stdio.h>
int main()
{
	int a[10],i,n,count=0;
	printf("\nenter the values: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n enter the search element :");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		count++;
	}
	if(count==0)
	{
		printf("\n %d is not found",n);
	}
	else
	{
		printf("\n %d is found",n);
	}
}
