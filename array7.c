#include<stdio.h>
int main()
{
	int a[10],i,j,ce=0,co=0;
	printf("\nenter the elements of an array");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\neven elements are ");
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==0)
		
       printf("%d\t",a[i]);
	}
	printf("\nodd elements are ");
	for(i=0;i<=9;i++)
	{
		if(a[i]%2!=0)
		printf("%d\t",a[i]);
	}
		return 0;
}
