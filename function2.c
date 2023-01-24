#include<stdio.h>
int sum(int a,int b)
{
	int c=a+b;
	return c;
}
int main()
{
	int a,b,c,n=1;
	printf("Enter the numbers: ");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum of two numbers is %d\n",c);
	while(n>0)
	{
		char t;
		printf("do you want this sum again: \n");
		scanf("%c",&t);
		if(t=='y')
		printf("sum of two numbers is %d\n",c);
		else
		printf(" ");
	}
}
