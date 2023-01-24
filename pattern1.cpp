#include<stdio.h>
int main()
{
	int a,r,t,sum=0;
	printf("enter the number");
	scanf("%d",&a);
	t=a;
	while(a>0)
	{
		r=a%10;
		sum=(sum*10)+r;
		a=a/10;
	}
	if(t==sum)
	printf("palendrome");
	else
	printf("not");
	
}