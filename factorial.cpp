#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	int *p,s=1;
	
	p=&a;
	
	for(int i=1;i<=*p;i++)
	{
		s=s*i;	
	}
	
	printf("factorial of %d is %d",*p,s);
}