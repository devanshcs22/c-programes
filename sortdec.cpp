#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(int j=0;j<n-1;j++)
	{
		if(a[i]<a[i+1])
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