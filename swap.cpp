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
	int max=a[0],min=a[0],k,l;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		k=i;
		if(a[i]<min)
		l=i;
	}
	int t;
	t=a[k];
	a[k]=a[l];
	a[l]=t;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}