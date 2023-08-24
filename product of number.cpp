#include<stdio.h>
int main()
{
	int num,product=1;
	printf("entre any number::");
	scanf("%d",&num);
	product = (num == 0 ? 0:1);
	while(num!=0)
	{
		product=product*(num%10);
		num = num/10;
	}
	printf("product of digite = %d",product);
}
