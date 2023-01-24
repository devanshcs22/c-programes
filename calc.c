#include<stdio.h>
void add()
{
	int x,y,sum;
	printf("Enter the first number: \n");
	scanf("%d",&x);
	printf("Enter the second number: \n");
	scanf("%d",&y);
	sum=x+y;
	printf("sum=%d\n",sum);
}
void multiply()
{
	int x,y,mult;
	printf("Enter the first number: \n");
	scanf("%d",&x);
	printf("Enter the second number: \n");
	scanf("%d",&y);
	mult=x*y;
	printf("product=%d\n",mult);
}
void devide()
{
	int x,y,div;
	printf("Enter the first number: \n");
	scanf("%d",&x);
	printf("Enter the second number: \n");
	scanf("%d",&y);
	div=x/y;
	printf("devide=%d\n",div);
}
int main()
{
	add();
	multiply();
	devide();
}
