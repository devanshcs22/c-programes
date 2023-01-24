#include<stdio.h>
void scanar(int a[],int n)
{
	printf("Enter the elements: \n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int sumar(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	sum=sum+a[i];
	return sum;
}
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	scanar(a,n);
	int sum=sumar(a,n);
	printf("Sum of the elements of that array is %d",sum);
}