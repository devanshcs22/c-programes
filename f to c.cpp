#include<stdio.h>
int main()
{
	int f,c;
	printf("Enter the temperature in fahrenheit:");
	scanf("%d",&f);
	c=(f-32)*5/9;
	printf("Temperature in celsius=%d",c);
	return 0;
	
}