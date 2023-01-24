#include<stdio.h>
int main()
{
	char str[100];
	gets(str);
	int c=0;
	for(int i=0;;i++)
	{
		if(str[i]=='\0')
		break;
		else
		c++;
	}
	printf("size of string is %d",c);
}