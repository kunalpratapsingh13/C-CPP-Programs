#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int a,b,c,h;
	printf("\nENTER VALUE-1:");
	scanf("%d",&a);
	printf("\nENTER VALUE-2:");
	scanf("%d",&b);
	printf("\nENTER VALUE-3:");
	scanf("%d",&c);
	h=a;
	if (h<b)
	{
		h=b;
	}
	if (h<c);
	{
		h=c;
	}
	printf("\nHIGHEST NUMBER IS:%d",h);
	getch();
}
