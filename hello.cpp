#include<stdio.h>
int main()
{
	float r,d,c,a;
	printf("radius of circle\t");
	scanf("%f",&r);
	d=2*r;
	printf("diameter of circle=%f\n",d);
	c=6.286*r;
	printf("circumference of circle=%f\n",c);
	a=3.14*r*r;
	printf("area of circle=%f",a);
	return 0;
}