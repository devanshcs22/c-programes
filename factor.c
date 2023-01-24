#include<stdio.h>
int main()
{
	int n=10,i,t,c=0;
	t=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	printf("number of factors is %d",c);
	int a[c];
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			a[i-1]=i;
		}
	}
	for(i=0;i<c;i++)
	printf("%d ",a[i]);
}