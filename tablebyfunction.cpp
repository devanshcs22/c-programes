#include<stdio.h>
int table(int m,int n)
{
	int a[2][10];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(i==0)
			{
				a[i][j]=(j+1)*m;
			}
			else
			{
				a[i][j]=(j+1)*n;
			}
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<10;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	return 0;
}
int main() 
{
	int m,n;
	printf("Enter the first number: ");
	scanf("%d",&m);
	printf("Enter the second number: ");
	scanf("%d",&n);
	table(m,n);
}