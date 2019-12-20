#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("\n enter the num:\n");
	scanf("%d",&n);
	if(n%2==0)
	   goto even;
	else
	   goto odd;
even:printf("\neven no");
exit(0);
odd: printf("odd no");
	

	}

