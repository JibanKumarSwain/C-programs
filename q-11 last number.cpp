#include<stdio.h>
int main()
{
	int n,fd,ld;
	printf("enter the digites:-");
	scanf("%d",&n);
	ld=n%10;
	printf("ld=%d\n");
	while(n>10) //n>10 are use the 'n' value is big to 10 'hum 10 se jada bi lesaakate he
	{
		n=n/10;
	}
	printf("fd=%d");
}
