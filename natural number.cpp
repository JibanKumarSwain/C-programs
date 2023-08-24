#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the nuber:");
	scanf("%d",&n);
	printf("natural number form 1 to %d: \n",n);
	i=1;
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	
}
