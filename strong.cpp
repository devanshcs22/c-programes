#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,t,r,s=1,c=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		s=1;
		for(a=1;a<=r;a++)
		{
			s=s*a;
		}
		c=c+s;
		n=n/10;
			
	}
	if(t==c)
	printf("strong");
	else
	printf("not");
}