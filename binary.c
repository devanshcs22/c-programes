#include<stdio.h>
int main()
{
	int i,l,m,f,n,sr;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int ar[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter element to be search: ");
	scanf("%d",&sr);
	f=0;
	l=n-1;
	m=(l+f)/2;
	while(f<=l)
	{
		if(ar[m]<sr)
		f=m+1;
		else if(ar[m]==sr)
		{
			printf("Element found");
			m+1;
			break;
		}
		else
		{
			l=m-1;
			m=(f+l)/2;
		}
		if(f>l)
		printf("Element not found");
	}
}