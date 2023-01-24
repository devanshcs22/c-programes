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
	int k,j=0;
	printf("Enter the value of element: ");
	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
		printf("position of %d is %d\n",k,i+1);
		j++;
		}
	}
	if(j==0)
	printf("not found");
	
}
