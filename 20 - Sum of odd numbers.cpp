#include<stdio.h>
#include<conio.h>
//clrsr();
int main()
{
	int i,n;
	unsigned long sum=0;
	printf("\nENTER A NUMBER:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum=sum+i;
	}
	printf("\nSUM OF THE ODD NUMBERS BETWEEN 1 AND %d IS:%lu",n,sum);
	getch();
}
