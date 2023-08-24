#include<stdio.h>
int main()
{
	int n,i,max,power=1;
	printf("enter the n ::");
	scanf("%d",&n);
	printf("enter the max::");
	scanf("%d",&max);
	for(i=1; i<=max; i++)
	{
		power = power * n;
	}
	printf("%d ^ %d = %d", n,max,power);
}
