#include<stdio.h>
int main()
{
	int a[10],i;
	printf("\nenter the elements of array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nrevese format of the array is ");
	printf("\n");
	for(i=9;i>=0;i--)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
