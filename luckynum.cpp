#include<stdio.h>
int main()
{
	int n,i=1,r,sum=0,temp;
	printf("\nenter the n value\n");
	scanf("%d",&n);
    temp=n;
	test:while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	 if(sum<10)
	 {
	 	printf("\nthe lucky number is:%d\n",sum);
	 }
	 else
	 {
	 	n=sum;
	 	sum=0;
	 	goto test;
	 }
}
