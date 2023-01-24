#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			if (a%2==0)
			{
				if (b%2==0)
				printf("1");
				else
				printf("0");
			}
			else
			{
				if (b%2==0)
				printf("0");
				else
				printf("1");
			}
		}
		printf("\n");
	}
	
}