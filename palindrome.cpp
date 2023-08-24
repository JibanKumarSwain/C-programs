#include<stdio.h>
int main()
{
	int n,rev=0;
	printf("enter any number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rev = rev*10 + n%10;
		n/=10;
	}
	if(rev==n)
	{
		printf("%d palidrome number",n);
	}
	else
	{
		printf("%d is not  palidrome",n);
	}
}
