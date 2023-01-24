#include<stdio.h>
int main()
{
	int a,n,c=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for(a=1;a<n;a++)
	{
		if(n%a==0)
		{
			c=c+a;
		}
	}
	if(c==n)
	printf("perfect");
	else
	printf("not");
	
}