#include<stdio.h>
int main()
{
	int i,a[5],b[5],c[5];
	printf("\nenter the elements of 1st array");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);                       //taking elements for 1st array
	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);                     //printing 1st array elements
	}
	printf("\nenter the elements of 2nd array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);                       //taking elements of 2nd array
	}
    for(i=0;i<5;i++)
    {
    	printf("\t%d",b[i]);                     //printing 2nd array elemets
	}
	for(i=0;i<5;i++)
	{
	c[i]=a[i]+b[i];                             //sum of both the arrays stored in another array
}
	printf("\nafter addition of above array we obtained");
	for(i=0;i<=5;i++)
	{
	printf("\t%d",c[i]);                        //printing the third array
}
	return 0;
}
