#include<stdio.h>
#define BASE 10
int main()
{
	int num,n,i,ld;
	int freq[BASE];
	printf("enter any number::");
	scanf("%d",&num);
	for(i=0; i<BASE; i++)
	{
		freq[i]=0;
	}
	while(n !=0)
	{
		ld = n%10;
		n/=10;
		freq[ld]++;
	}
	printf("frequency of each digit in %d is : \n",num);
	for(i=0; i<BASE; i++)
	{
		printf("frequency of %d = %d\n",i,freq[i]);
	}
}
