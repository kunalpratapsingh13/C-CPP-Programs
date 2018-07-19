#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,l,h;
	printf("\nENTER VALUES FOR THE ARRAY:\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	h=a[0];
	for (i=0;i<5;i++)
	{
		if (l>a[i])
		l=a[i];
		if (h<a[i])
		h=a[i];
	}
	printf("\nHIGHEST VALUE:%d",h);
	printf("\nLOWEST VALUE:%d",l);
	getch();
}
