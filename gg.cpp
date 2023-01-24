#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],b[n],i;
	printf("Enter the elements of first array: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the elements of second array: ");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	
	int c[2*n];
	
	for(i=0;i<n;i++)
	c[i]=a[i];
	for(i=n;i<2*n;i++)
	c[i]=b[i];
	
	for(i=0;i<2*n;i++)
	printf("%d",c[i]);
	
}