#include <stdio.h>

int main() 
{
	int n,m,max;
	printf("enter the two positive intergers: ");
	scanf("%d%d",&n,&m);
	max=((n>m)?n:m);
	while(1)
	{
		if((max%n==0)&&(max%m==0))
		{
			printf("LCM of %d and %d is %d",n,m,max);
			break;
		}
		max++;
	}
}