#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the first angle of triangle:");
	scanf("%f",&a);
	printf("enter the second angle of triangle:");
	scanf("%f",&b);
	c=180-(a+b);
	printf("third angle of triangle=%f",c);
	return 0;
}