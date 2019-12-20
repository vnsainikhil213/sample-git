#include<stdio.h>
int main()
{
	int a,b,m,n;
	printf("\n enter the no.of tables:");
	scanf("%d",&n);
	printf("\n enter the no.of terms:");
	scanf("%d",&m);
	for(a=1;a<=n;a++)
	{		
		for(b=1;b<=m;b++)
		{
		printf("\n %d x %d=%d",a,b,a*b);	
		}
		printf("\n");
	}
	}
