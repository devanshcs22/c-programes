#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1)
			printf("A");
			else if(j==2)
			printf("E");
			else if(j==3)
			printf("I");
			else if(j==4)
			printf("O");
			else if(j==5)
			printf("U");
		}
		printf("\n");
	}
}
			
			
			