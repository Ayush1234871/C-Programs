#include<stdio.h>
int factorial();
int main()
{
 
   int f;
   f=factorial();
   	printf("\nfactorial is %d",f);
   return 0;	
}
int factorial()
{
	int f=1,i,n;
	printf("\nenter the number whose factorial is to be obtained");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

