/*Exponent of a number using for loop*/
#include <stdio.h>
#include <conio.h>
main()
{
	int num,temp,power,i;
	unsigned long res=1;
	//clrscr();
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	printf("\nENTER THE POWER: ");
	scanf("%d",&power);
	temp=num;
	for(i=1;i<=power;i++)
	{
		res=res*num;
	}
	printf("\nTHE %d POWER OF %d IS %lu",power,temp,res);
	getch();															
}

