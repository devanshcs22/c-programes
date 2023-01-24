#include<stdio.h>
void scanar(int r,int c, int a[][100])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
}
void printer(int r,int c,int a[][100])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}
int main()
{
	int m,n;
	printf("Enter the number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of columns: ");
	scanf("%d",&n);
	int a[m][100];
	scanar(m,n,a);
	printer(m,n,a);
}
