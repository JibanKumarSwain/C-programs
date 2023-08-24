#include<stdio.h>
int main()
{
	int i,n;
	printf("print all the odd numbers");
	scanf("%d",&n);
	printf("aall the odd num 1 to %d::\n",n);
	for(i=1;i<=n;i++)
	{
	if(i%2!=0)
	{
		printf("%d\n",i);
	}
}
}
