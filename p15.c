//wap to print all no. within n to 20 (where n is less than 20)
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number less then 20 : ");
	scanf("%d",&n);
	if(n<=20)
		for(n;n<=20;n++)
		printf("%d ",n);
	else
	printf("value must be less then 20....");
}
