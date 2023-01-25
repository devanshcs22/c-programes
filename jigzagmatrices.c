#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of column: ");
	scanf("%d",&n);
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i%2==1)
		printf("%d ",a[i][n-1-j]);
		else
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}