#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		if(i%2==1)
		{
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			printf("%d",j);	
		}
		printf("\n");
		}
	}
}