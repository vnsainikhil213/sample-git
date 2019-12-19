#include<iostream>
using namespace std;
int main()
{
int n,rem=0,i,fac=0,sum=0;
cout<<"\n enter the n value\n";
cin>>n;
for(i=0;i<n;i++)
{
rem=n%i;
if(rem==0)
{
cout<<"\n factor of given num\n";
sum=sum+i;
cout<<"\n sum="<<sum;
}
else
{
cout<<"\n not a factor";
}
}
if(sum==n)
{
cout<<n<<"\t is a perfect number";
}
}
