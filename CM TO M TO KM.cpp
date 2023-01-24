#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the length in cm:");
	scanf("%f",&a);
	b=a/100;
	printf("length in meter=%f\n",b);
	c=b/1000;
	printf("length in kilometer=%f",c);
	return 0;
}