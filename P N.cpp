#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:- ");
	scanf("%d",&a);
	a>0 && printf("number is positive");
	a<0 && printf("number is negative");
	return 0;
}