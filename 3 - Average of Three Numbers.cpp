#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int n1,n2,n3;
	float avg;
	printf("\nENTER NUMBER-1:");
	scanf("%d",&n1);
	printf("\nENTER NUMBER-2:");
	scanf("%d",&n2);
	printf("\nENTER NUMBER-2:");
	scanf("%d",&n3);
	avg=(n1+n2+n3)/3;
	printf("\nTHE AVERAGE OF THE THREE NUMBERS IS :%0.2f",avg);
	getch();
}
