#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number: ");
	scanf("%d",&a);
	b=~a;
	if(b%2==0)
	printf("set(1)");
	else
	printf("unset(0)");
}