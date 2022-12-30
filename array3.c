#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	printf("\nenter the elements of an array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	for(i=0;i<5;i++)
	{
	sum=sum+a[i];
}

printf("\nsum is %d",sum);
return 0;	
}
