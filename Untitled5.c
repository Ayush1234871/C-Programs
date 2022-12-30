#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	printf("\nenter the elements of an array");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nelements in ascending order are");
for(i=0;i<=4;i++)
{
	printf("%d\t",a[i]);
}
	return 0;
}
