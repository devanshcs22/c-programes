#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n],i,j;
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Second smallest number is %d",a[1]);
	printf("second largest number is %d",a[n-2]);
}