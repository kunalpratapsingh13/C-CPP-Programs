#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,j;
	printf("\nENTER THE NUMBER OF LINES:");
	scanf("%d",&num);
	for (i=0;i<=num;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("1");
		}
		printf("\n");
	}
	getch();
}
