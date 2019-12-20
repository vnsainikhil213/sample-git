#include<stdio.h>
#include<stdlib.h>
main()
{
int bal,minbal,avbal,ch,temp;
printf("\n enter two values :");
scanf("%d%d",&bal,&minbal);
while(1)
{


printf("\n 1. deposit \n 2. withdraw \n 3. show balance \n  4. Exit");

printf("\n enter your choice :");
scanf("%d",&ch);

switch(ch)
{
case 1: printf("enter the amount");
scanf("%d",&temp);
       bal=bal+temp;
     
printf("\n deposite is :%d",temp);
  break;
case 2:
avbal=bal-minbal;
printf("enter amount to withdraw");
scanf("%d",&temp);
if(temp<=avbal)
{
bal=bal-temp;
printf("collect cash");
}
else
printf("no balance");
break;


case 3:avbal=bal-minbal;
printf("\n balance=%d",avbal);
printf("leger balance :%d ",bal);
break;

case 4:exit(0);
default:printf("\n Invalid choice...!");
} // switch
  } // while
} // main


