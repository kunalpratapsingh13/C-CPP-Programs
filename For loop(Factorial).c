#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,fact=1;
	printf("\nENTER A NUMBER:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFACTORIAL OF %d IS : %d",n,fact);
	getch();
}
