#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("this is the return number \n");
	i=n;
	while(i>=0)
	{
		printf("%d\n",i);
		i--;
	}
}
