//program to interchange adjacent element 
#include<stdio.h>
int main()
{
	int i,a[5],t;
	printf("\nenter the elements of an array");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe elements are");
	printf("\n");
	for(i=1;i<=5;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=1;i<=5;i++)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t; 
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
