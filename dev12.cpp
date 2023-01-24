#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:- ");
	scanf("%d",&a);
	(a&1)?printf("odd"):printf("even");
}