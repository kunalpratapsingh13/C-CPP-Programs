#include<stdio.h>
#include<conio.h>
int main()
{
	int num,digit,sum=0;
	printf("\nENTER A 5-DIGIT NUMBER:");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		sum=sum+digit;
	}
	printf("\nSUM OF THE DIGITS OF IS:%d",sum);
	getch();
}
