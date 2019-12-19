#include<stdio.h>
int main()
{
    char s[20];
    int a,b,c,rollno,tot=0;
    float avg=0;
    printf("enter the name\n");
    scanf("%s",&s);
    printf("enter the rollno:\n");
    scanf("%d",&rollno);
    printf("\n enter marks for subjects:\n");
    scanf("%d%d%d",&a,&b,&c);
    tot=a+b+c;
    printf("tot:",tot);
    avg=tot/3;
    printf("avg:",avg);

}
