#include<stdio.h>
int main()
{
	float s,a;
	printf("enter side of equilateral triangle:");
	scanf("%f",&s);
	a=(1.732/4)*s*s;
	printf("area of equilateral triangle=%f",a);
	return 0;
}