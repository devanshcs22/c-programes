#include<stdio.h>

int main()
{
	int a,n,sum=0,r;
	printf("enter the number: ");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
		
	}
	if(a==sum)
	printf("yes");
	else
	printf("no");
	
	
	
}