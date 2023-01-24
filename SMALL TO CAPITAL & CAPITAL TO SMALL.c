#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:-");
	scanf("%c",&ch);
	if (ch>=97)
	{
		printf("Character is=%c",ch-32);
	}
	else if (ch<=97 && ch>=65)
	{
		printf("character is=%c",ch+32);
	}
	return 0;
}