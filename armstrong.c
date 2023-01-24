#include<stdio.h>
#include<math.h>
int main()
{
	int n,c=0,t,s=0,r;
	printf("Enter the Number: ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	n=t;
	while(t>0)
	{
		r=t%10;
		s=s+pow(r,c);
		t=t/10;
	}
	if(n==s)
	printf("armstrong");
	else
	printf("not");
}