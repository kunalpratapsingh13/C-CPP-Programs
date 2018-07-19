#include<stdio.h>
#include<conio.h>
//clrscr();
int main()
{
	int qty,rate;
	float net,disc;
	printf("\nENTER QUANTITY:");
	scanf("%d",&qty);
	printf("\nENTER RATE:");
	scanf("%d",&rate);
	if (qty>100)
	disc=qty*rate*10/100;
	else
	disc=0;
	net=qty*rate-disc;
	printf("\nNET AMOUNT:%0.2f",net);
	getch();
}
