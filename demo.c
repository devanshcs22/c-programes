#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements ");
	scanf("%d",&n);
	int i,a[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c=0,d=0,e=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		c++;
		else if(a[i]>0)
		d++;
		else if(a[i]==0)
		e++;
	}
	printf("number of positive elements is %d",d);
	printf("number of negative elements is %d",c);
	printf("number of zero elements is %d",e);
}