#include<stdio.h>
int main()
{
	int c,f;
	printf("enter the temperature in celsius");
	scanf("%d",&c);
	f=(c*1.8)+32;
	printf("Temperature in fahrenheit=%d",f);
	return 0;
}