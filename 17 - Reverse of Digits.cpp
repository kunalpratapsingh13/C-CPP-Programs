#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	unsigned long rev,num;
	printf("\nENTER THE NUMBER:");
	scanf("%lu",&num);
	printf("\nTHE REVERSE OF THE NUMBER %lu IS:",num);
	do
	{
		rev=num%10;
		num=num/10;
		printf("%lu",rev);
	}
	while(num!=0);
	getch();
}
