#include<stdio.h>
#include<math.h>
void arm(int x,int y)
{
	int n;
	for(n=x;n<=y;n++)
	{
	int c=0,t,s=0,r;
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
	printf("%d is a armstrong number\n",n);
	}
}
int main()
{
	int a,b;
	printf("Enter the initial point: ");
	scanf("%d",&a);
	printf("Enter the final point: ");
	scanf("%d",&b);
	arm(a,b);
}