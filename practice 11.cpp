#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			if(j%2==1)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
}