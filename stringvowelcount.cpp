#include<stdio.h>
int main()
{
	char str[100];
	gets(str);
	int c=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		  c++;
		  
	}
	printf("total number of vowels are %d",c);
}