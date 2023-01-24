#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("Enter the numbers of strings: ");
	scanf("%d",&n);
	char str[n][100];
	for(int i=0;i<=n;i++)
	gets(str[i]);
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				char s[100];
				strcpy(s,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],s);
			}
		}
	}
	for(int i=0;i<=n;i++)
	puts(str[i]);
}