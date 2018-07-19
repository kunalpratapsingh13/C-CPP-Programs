#include<stdio.h>
#include<conio.h>
int main()
{
	int num,rev;
	printf("\nENTER THE FIVE-DIGIT NUMBER:");
	scanf("%d",&num);
	printf("\nREVERSE OF THE NUMBER IS:");
	while(num!=0)
	{
		rev=num%10;
		num=num/10;
		printf("%d",rev);
	}
	getch();
}
