#include<stdio.h>
int main()
{
	int n,i=1,r,sum=0,temp;
	printf("\nenter the n value\n");
	scanf("%d",&n);
    temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	 if(sum==temp)
	 {
	 	printf("%d is palindrom",temp);
	  } 
	  else
	  {
	  	printf("not a palindrom");
	  }
}
