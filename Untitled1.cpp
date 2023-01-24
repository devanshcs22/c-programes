#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],f[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		f[i]=0;
	}
	
	{
		for(int i=0;i<n;i++)
		{
	
			int c=0;
			for (int j=0;j<n;j++)
			{
			if(f[i]==0)
			{
			if(a[i]==a[j])
			{
				
				f[i]++;
				c++;
			}
			printf("frequency of %d is %d\n",a[i],c);
			}
			
			}
		
		}
	}
}