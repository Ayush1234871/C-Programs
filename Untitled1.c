#include <stdio.h>

int main()
{
    int i, a[6];
    enter(a);
    print(a);
    insert(a);
    return 0;
}
int enter(int a[])
{
    int i;
    printf("\nenter the elements of an array");
    for (i = 1; i <= 5; i++)
        scanf("%d", &a[i]);
}
int print(int a[])
{
    int i;
    printf("\nthe elements you entered are");
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        printf("%d\t", a[i]);
    }
}
int element()
{
    int num;
    printf("\nenter the element to be inserted/deleted");
    scanf("%d", &num);
    return num;
}
int position()
{
    int pos;
    printf("\nenter the position at which the element is to be inserted/deleted");
    scanf("%d", &pos);
    return pos;
}
int insert(int a[])
{
    int i, pos, num;
    num = element();
    pos = position();
    for (i = 5; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = num;
    printf("\n");
    for (i = 1; i <= 6; i++)
    {
        printf("%d\t", a[i]);
    }
}
