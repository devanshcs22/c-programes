#include<stdio.h>
int main()
{
	int a,n,c=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(a=1;a<n;a++)
	{
		if(n%a==0)
		{
			c=c+a;
		}
		
	}
	printf("%d",c);
	if(c==n)
	printf("perfect number");
	else
	printf("not");
}