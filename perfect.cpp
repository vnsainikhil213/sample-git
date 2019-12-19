#include<stdio.h>
int main()
{
	int n,i=1,rev=0;
	printf("\nenter the n value\n");
	scanf("%d",&n);
 printf(" the rev num is:");
 while(n>0)
 {
 	rev=n%10;
 	printf("%d",rev);
 	n=n/10;
 }  
}
