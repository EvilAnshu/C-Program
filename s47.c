#include<stdio.h>
void main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d th element of array with index %d : %d\n",i+1,i,a[i]);
	}
}
