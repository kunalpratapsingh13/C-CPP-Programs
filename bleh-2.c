#include<stdio.h>
#include<conio.h>
int main()
{
	int age[10],i;
	float avg,sum=0.0;
	for (i=0;i<10;i++)
	{
		printf("\nENTER AGE-%d:",i+1);
		scanf("%d",&age[i]);
		sum=sum+age[i];
	}
	printf("\nINPUT AGES ARE:");
	for (i=0;i<10;i++)
	{
		printf("%d\n",age[i]);
		avg=sum/10;
		printf("AVERAGE OF THE AGES IS:%0.2f",avg);
	}
	getch();
	}
