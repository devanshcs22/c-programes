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
	
	int sum=0,sumd=0,suma=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
			if(i==j)
			sumd=sumd+a[i][j];
			else if(i+j==n-1)
			suma=suma+a[i][j];
		}
	}
	printf("Sum of all elements is %d\n",sum);
	printf("sum of elements on diagonal is %d\n",sumd);
	printf("sum of elements on antidiagonal is %d\n",suma);
}