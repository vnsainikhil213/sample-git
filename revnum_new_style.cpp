#include<stdio.h>
int main()
{
	int n,i=1,r=0,count=0;
	printf("\nenter the n value\n");
	scanf("%d",&n);
 printf(" the digit count:");
 while(n>0)
 {
 	r=n%10;
 	count++;  
 	n=n/10;
 }
 printf("%d",count);  
}
