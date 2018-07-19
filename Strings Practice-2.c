/*Finding the length of a string*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char arr[200];
	int len;
	printf("\nENTER A STRING OF CHARACTERS:");
	gets(arr);
	len=strlen(arr);
	printf("\nTHE LENGTH OF THE STRING IS:%d",len);
	getch();
}
