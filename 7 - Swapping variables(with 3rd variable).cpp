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
	printf("\nBEFORE SWAPPING , a=%d AND b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAFTER SWAPPING, a=%d AND b=%d",a,b);
	getch();
}
