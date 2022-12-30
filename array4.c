#include<stdio.h>
int main()
{
	int i,a[5],ctr;
	printf("\nenter the elements of an array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nelements of 1st array are");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}

	printf("\n");
	printf("\nunique elements are");
	for(i=0;i<5;i++)
	{
		ctr=0;
	for(int j=0;j<6;j++)
	{   if(i!=j)
	{
	if(a[i]==a[j])
	{
		ctr++;
	}
	}
	}
	if(ctr==0)
	{
		printf("\t%d",a[i]);
	
	}
}
	return 0;
}
