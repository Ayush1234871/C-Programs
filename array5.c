#include<stdio.h>
int main()
{
	int i,a[5],n,found;
	printf("\nenter the elements of an array");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n printing the elements of an array");
	for(i=1;i<=5;i++)
	{
		printf("\t%d",a[i]);
	}
		printf("\nenter the element to be searched");
	    scanf("%d",&n);
	    printf("\n");
	    
	for(i=1;i<=5;i++)
	{
		if(a[i]==n)
		{
		break;
	    }
	}
	printf("\n%d is found at base index %d",n,i);		
	return 0;
}
