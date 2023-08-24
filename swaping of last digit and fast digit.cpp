#include<stdio.h>
int main()
{
	int temp,no,swap,rev=0,f,l;
	printf("enter the number");
	scanf("%d",&no);
	temp=no;
	l=no%10;
	while(no>10)
	{
		no=no/10;
	}
	f=no;
	no=temp/10;
	while(no>10)
	{
		rev=rev*10+no%10;
		no=no/10;
	}
	swap=l;
	while(rev>0)
	{
		swap=swap*10+rev%10;
		rev=rev/10;
	}
	swap=swap*10+f;
	printf("%d",swap);
}
