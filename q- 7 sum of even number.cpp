#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number::");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	
	//	if(n%2==0);
		{
		//	printf("%d ",i);
			sum =sum+ i;
		}
	
	printf("sum of all even number 1 to %d =%d",n,sum);
}
