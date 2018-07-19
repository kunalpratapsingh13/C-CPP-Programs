#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int rad;
	float pi=3.14,area;
	printf("\nENTER RADIUS OF CIRCLE:");
	scanf("%d",&rad);
	area=pi*rad*rad;
	printf("\nAREA OF THE CIRCLE IS:%0.2f",area);
	getch();
}
