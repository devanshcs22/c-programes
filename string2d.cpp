#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	char str[n][100];
	for(int i=0;i<=n;i++)
	gets(str[i]);
	
	for(int i=0;i<n;i++)
	puts(str[i]);
}