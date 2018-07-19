#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int age;
	unsigned long sec;
	printf("\nENTER AGE:");
	scanf("%d",&age);
	sec=age*365*24*60*60;
	printf("\nSECONDS IN THE INPUT AGE ARE:%lu",sec);
	getch();
}
