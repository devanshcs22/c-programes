#include<stdio.h>
int main()
{
	int m,n,i,j,k;
	printf("enter the number of rows: ");
	scanf("%d",&n);
	m=n;
	for(i=1;i<=n;i++)
	{
		for(j=m;j>1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		m--;
		printf("\n");
	}
}