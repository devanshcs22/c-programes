#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows and columns: ");
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	int b[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d ",&b[i][j]);
	}
	int c=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==b[i][j])
			c++;
		}
	}
	if(c>=7)
	printf("player is winner");
	else
	printf("Not");
	
}