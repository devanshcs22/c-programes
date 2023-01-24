#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter the string: ");
	gets(str);
	int c=0;
	for(int i=0;str[i]!='\0';i++)
	{
		c++;
	}
	char rev[100];
	for(int i=0;i<c;i++)
	{
		rev[i]=str[c-i-1];
	}
	printf("Reversed string is: %s\n",rev);
	int s=0;
	for(int i=0;i<c;i++)
	{
		if(str[i]==rev[i])
		s++;
	}
	if(s==c)
	printf("It is a palindrome string.");
	else
	printf("It is not.");
}