#include<stdio.h>
int main()
{
	int a=0,b=1,n,c,z=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(z<=n)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		z++;
	}
	
}