#include<stdio.h>
int enter(int a[]);
int print(int a[]);
int insert(int a[]);
int element();
int position();
int main()
{   int i,a[6];
	enter(&a[0]);
	print(&a[0]);
	insert(&a[0]);
		for(i=1;i<=6;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
int enter(int a[])
{
	int i;
	printf("\nenter the elements of an array");
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
}
int print(int a[])
{
	 int i;
     printf("\nthe elements you entered are");
     printf("\n");
     for(i=1;i<=5;i++)
     {
     	printf("%d\t",a[i]);
	 }
}
int element()
{
	int num;
	printf("\nenter the element to be inserted/deleted");
	scanf("%d",&num);
}
int position()
{
	int pos;
	printf("\nenter the position at which the element is to be inserted/deleted");
	scanf("%d",&pos);
}
int insert(int a[])
{
	int i,pos,num;
		element();
	     position();
	for(i=6;i>=pos-1;i--)
	{
		a[i]=a[i-1];
	}
	
	a[pos]=num;
	printf("\n");

}
