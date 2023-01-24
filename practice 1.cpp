#include<stdio.h>
int main()
{
	int i,j,m,n,hcf;
	printf("enter the two positive integers: ");
	scanf("%d%d",&m,&n);
	j=(m<n)?m:n;
	for(i=1;i<=j;i++)
	{
		if((m%i==0)&&(n%i==0))
		hcf=i;
	}
	printf("hcf of %d & %d is %d",m,n,hcf);

}