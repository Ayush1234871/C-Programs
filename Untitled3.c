#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("\nenter the number of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
	
		for(j=n;j<=n+1-i;j++)
		{
		
			printf("*");
		}
	}
	   printf("\n");
}		
	return 0;
}
