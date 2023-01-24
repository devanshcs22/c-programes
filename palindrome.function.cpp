#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	gets(s2);
	
	strcpy(s1,s2);
	strrev(s1);
	
	int c=strcmp(s1,s2);
	
	if(c==0)
	printf("This is a palindrome string.");
	else
	printf("Not");
	
}