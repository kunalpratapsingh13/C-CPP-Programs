#include <stdio.h>
#include <conio.h>
int main()
{
	char str[50];
	int count=0,len;
	//clrscr();
	printf("\nENTER A STRING: ");
	gets(str);
	for(len=0;str[len]!=NULL;len++);
	{
		count=count+len;
	}
	printf("\nTHE LENGTH OF THE STRING IS %d",count);
	getch();
}


