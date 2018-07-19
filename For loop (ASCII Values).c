#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("\nENTER A NUMBER:");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		printf("%d=%c\n",i,i);
	}
	getch();
}
