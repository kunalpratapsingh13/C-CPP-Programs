#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int n1,n2,sum,prod,diff,remain,quot;
	printf("\nENTER NUMBER-1:");
	scanf("%d",&n1);
	printf("\nENTER NUMBER-2:");
	scanf("%d",&n2);
	sum=n1+n2;
	diff=n1-n2;
	quot=n1/n2;
	prod=n1*n2;
	remain=n1%n2;
	printf("\nSUM OF THE TWO NUMBERS IS:%d",sum);
	printf("\nDIFFERENCE OF THE TWO NUMBERS IS:%d",diff);
	printf("\nPRODUCT OF THE TWO NUMBERS IS:%d",prod);
	printf("\nQUOTIENT OF THE TWO NUMBERS IS:%d",quot);
	printf("\nREMAINDER OF THE TWO NUMBERS IS:%d",remain);
	getch();
}
