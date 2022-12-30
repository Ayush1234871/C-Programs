#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\nenter the number of rows");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=n-i;j--)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
