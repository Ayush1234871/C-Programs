#include<stdio.h>
int main()
{
	int i,a[5],max,min;
	printf("\nenter the elements of an array");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe elemts are");
	for(i=1;i<=5;i++)
	{
		printf("\t%d",a[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			
		}
		if(a[i]<min)
		{
			min=a[i];
		
		}
	}
	printf("\nmaximum is %d",max);
	printf("\nminimum is %d",min);
	return 0;
}
