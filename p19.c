//wap to add all numbers within 1 to n that is divisible by3
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%3==0)
	{
	sum=sum+i;
	
	}
	}
	printf("%d ",sum);
}
