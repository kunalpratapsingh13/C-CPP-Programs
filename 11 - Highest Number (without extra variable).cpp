#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a,b,c;
	printf("\nENTER VALUE-1:");
	scanf("%d",&a);
	printf("\nENTER VALUE-2:");
	scanf("%d",&b);
	printf("\nENTER VALUE-3:");
	scanf("%d",&c);
	if (a>b&&a>c)
	printf("\nHIGHEST NUMBER IS:%d",a);
	if (b>c&&b>a)
	printf("\nHIGHEST NUMBER IS:%d",b);
	if (c>a&&c>b)
	printf("\nHIGHEST NUMBER IS:%d",c);
	getch();
}
