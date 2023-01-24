#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int k=0;k<n-1;k++)
	{
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			int t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}