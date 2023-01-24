#include<stdio.h>
int main()
{
	int a,n,b,c=0,r;
	printf("enter the number: ");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		c=(c*10)+r;
		n=n/10;
		
	}
	if(a==c)
	printf("palindrome");
	else
	printf("not");
}