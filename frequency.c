#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],i,j,f[n],c;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		f[i]=0;	
	}
	
	for(i=0;i<n;i++)
	{
		
		
		{
			if(f[i]==0)
			{
			 c=0;
			for(int j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
					f[j]=-1;
					c++;		
				}
			
			}
			}
			printf("%d occurs %d times",a[i],c);
		}
		
		
		
	}
}