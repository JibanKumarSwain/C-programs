#include<stdio.h>
int main()
{
	int n,fd,ld,sum;
	printf("enter the number:-");
	scanf("%d",&n);
	ld=n%10;
//	printf("ld=%d\n");
	fd=n;
	while(n>9)
	{
		n=n/10;
	}
//	printf("fd=%d\n");
	fd=n;
	sum=ld+fd;
	printf("sum of ld and fd=%d",sum); 
	return 0; 
}
