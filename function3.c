#include<stdio.h>
int main()
{
	int a,b;
	char t='y';
	while(t=='y')
	{
		printf("Enter the two numbers: ");
		scanf("%d%d",&a,&b);
		printf("sum=%d",a+b);
		fflush;
		printf("do you want to sum again: ");
		scanf("%c",&t);
	}
}