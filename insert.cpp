#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n+1],i,p;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the position to insert element: ");
	scanf("%d",&p);
	for(i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	int e;
	printf("Enter the value of element to insert:  ");
	scanf("%d",&e);
	a[p]=e;
	for(i=0;i<=n;i++)
	printf("%d ",a[i]);
}