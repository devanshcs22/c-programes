#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows and column of matrix: ");
	scanf("%d",&n);
	int a[n][n],i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j)
		printf("%d",a[i][j]);
		else
		printf(" ");
		}
		printf("\n");
	}
}
	