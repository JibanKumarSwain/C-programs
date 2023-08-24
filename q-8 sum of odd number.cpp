#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum +=i;
		}
	}
	printf("sum of odd number between %d to %d",n,sum);
}
