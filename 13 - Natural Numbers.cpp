#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int i=1,n;
	printf("\nENTER A NUMBER:");
	scanf("%d",&n);
	printf("\nNATURAL NUMBERS BETWEEN 1 AND %d ARE:",n);
	while(i<=n)
	{
		printf("\n%d",i);
		i++;
	}
	getch();
}
