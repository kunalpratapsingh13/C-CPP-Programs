#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	printf("\nENTER THE NUMBER:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		sum=sum+i;
	}
	printf("\nSUM OF THE EVEN NUMBERS BETWEEN 1 AND %d IS:%d",n,sum);
	getch();
}
