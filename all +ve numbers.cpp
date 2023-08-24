#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the all even number::");
	scanf("%d",&n);
	printf("all the even number 1 to %d::\n",n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\n",i);		
		}
		i++;
	}
}
