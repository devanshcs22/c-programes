#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n],i,p;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the position to delete element: ");
	scanf("%d",&p);
	for(i=p;i<n-1;i++)
	a[i]=a[i+1];
	
	for(i=0;i<n-1;i++)
	printf("%d  ",a[i]);
}