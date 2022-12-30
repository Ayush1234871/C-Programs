#include<stdio.h>
int enter(int a[]);
int print(int a[]);
int insert();
int delete1();
int increase1();
int element();
int position();
int main()
{   int i,a[6],ch;
printf("\n 1-- To insert an element in an array \n 2-- To delte an element in an array");
printf("\n 3-- To arrange the array in ascending order");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("\nyou enterd 1 key");
	enter(a);
	print(a);
	insert(a);
	printf("\nyou have obtained your result");
	break;
case 2:
	printf("\nyou enterd 2 key");
	enter(a);
	print(a);
	delete1(a);
	printf("\nyou have obtained your result");
	break;
case 3:
	printf("\nyou enterd 3 key");
	enter(a);
	print(a);
	increase1(a);
	printf("\nyou have obtained your result");
	break;
	default:
		printf("\ninvalid key");
		break;	
}
	return 0;
}
int enter(int a[])
{
	int i;
	printf("\nenter the 5 elements of an array");
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
	return num;
}
int position()
{
	int pos;
	printf("\nenter the position at which the element is to be inserted/deleted");
	scanf("%d",&pos);
	return pos;
}
int insert(int a[])
{
	int i,pos,num;
		num=element();
	    pos=position();
	for(i=6;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	
	a[pos]=num;
		for(i=1;i<=6;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int delete1(int a[])
{
	int i,pos,num;
	pos=position();
	if(pos>=6)
	{
		printf("\ndelteion is not possible");
	}
	else
	for(i=pos;i<=5;i++)
	{
		a[i]=a[i+1];
	}
	for(i=1;i<=4;i++)
	{
		printf("%d\t",a[i]);
	}	
}
int increase1(int a[])
{
	int i,temp,j;
	for(i=1;i<=5;i++)
	{
		for(j=i+1;j<=5;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
printf("\nelements in ascending order are ");
	printf("\n");
      for(i=1;i<=5;i++)
      {
        	printf("%d\t",a[i]);
      }
  }
