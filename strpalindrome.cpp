#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],s2[100];
	gets(str);
	strcpy(s2,str);
	strrev(str);
	int n=strcmp(str,s2);
	if(n==0)
	{
		printf("string is palindrome");
	}
	else
	printf("not");
	
	
}