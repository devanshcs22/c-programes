#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of columns: ");
	scanf("%d",&n);
	int i,j,a[m][n];
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
	int c=0,d=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(a[i][j]==0)
		c++;
		else 
		d++;
		}
	}
	if (c>d)
	printf("dence");
	else
	printf("not");
}