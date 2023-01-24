#include<stdio.h>
int main()
{
	int a,b,k;
	for(a=1;a<=10;a++)
	{
		for(b=10;b>=a;b--)
		{
			printf("*");
		}
		
		printf("\n");
		for(k=1;k<=a;k++)
		{
			printf(" ");
		}
		
	}

}