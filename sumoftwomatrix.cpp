#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows and columns: ");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}
	
}