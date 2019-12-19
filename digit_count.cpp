#include<stdio.h>
int main()
{
	int n,i=1,r=0,sum=0,temp=0;
	printf("\nenter the n value\n");
	scanf("%d",&n);
 printf(" the sum of digits is:");
 while(n>0)
 {
 	r=n%10;
 	sum=sum+r;  
 	n=n/10;
 }
 printf("%d",sum); 
 while(sum>=0)
 {
 	sum=sum%10;
 	temp=temp+sum;
 	sum=sum/10;
 	
  }
  printf("=%d",temp); 
}
