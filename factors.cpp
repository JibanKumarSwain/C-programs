#include<stdio.h>
int main()
{
	int i,num;
	printf("enter any number to find its number");
	scanf("%d",&num);
	printf("all factors of %d are: \n", num);
	for(i=1; i<=num; i++)
	{
		if(num % i == 0)
		{
			printf("%d,",i);
		}
	}
} 



