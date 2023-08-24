#include<stdio.h>
int main()
{
	int n,rev=0;
	printf("enter any number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rev = rev*10 + n%10;  					//num = 1234
		n /=10;									//rev=0
	}											//rev=rev*10 + num%10=4
	printf("reversed the number = %d\n",rev);	//num = num/10=123 
}												//rev=rev*10 + num%10=40+3=43
												//num = num/10=12
												//rev = rev*10 + num%10=430+=432
												//num = num/10=1
												//rev = rev*10 + num%10 = 4320+1=4321
												//num = nnum/10=0
