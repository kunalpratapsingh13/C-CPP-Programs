#include <stdio.h>
#include <conio.h>
int main()
{
	int mark,num=0;
	float sum,avg=0.0;
	//clrscr();
	printf("\nENTER MARK OR -1 TO QUIT:\n");
	scanf("%d",&mark);
	while(mark!=-1)
	{
		sum=sum+mark;
		num=num+1;
		scanf("%d",&mark);
	}
	avg=sum/num;
	printf("\nAverage Mark:%0.2f",avg);
	getch();
}

