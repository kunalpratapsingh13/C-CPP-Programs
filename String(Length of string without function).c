#include <stdio.h>
#include <conio.h>
int main()
{
	char str[50];
	int len;
	//clrscr();
	printf("\nENTER A STRING: ");
	gets(str);
	for(len=0;str[len]!=NULL;len++);
	printf("\nTHE LENGTH OF THE STRING IS %d",len);
	getch();
}


