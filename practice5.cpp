#include<stdio.h>
int main()
{
	int a,r,b,c=0,n,s;
	s=n;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		int fact=1;
		for(b=1;b<=r;b++)
		fact=fact*b;
		c=c+fact;
		n=n/10;
	}
	if(s==c)
	printf("strong");
	else
	printf("not");
}