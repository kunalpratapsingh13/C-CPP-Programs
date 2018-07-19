/*Factorial of a number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num;
	int fact,temp;
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	temp=num;
	for (i=1;i<num;i++)
	{
		fact=num*i;
		num=fact;
	}
	printf("\nFACTORIAL OF %d IS:%d",temp,fact);
	getch();
}
